CC = cc

# CFLAGS = -Wall -Wextra -Werror

SRC =	push_swap.c				h1_tools.c				h2_tools.c				ft_handle_input.c		\
		ft_list_edit.c			ft_memleaks.c			ft_push_b.c				ft_targets.c 			\
		./Operations/pb.c		./Operations/sa.c		./Operations/rb.c		./Operations/ra.c		\
		./Operations/pa.c		./Operations/rra.c		./Operations/rrb.c 		./Operations/rr.c 		\
		./Operations/rrr.c		ft_sort_fn.c			ft_sort_last.c			\

OBJ = $(SRC:.c=.o)

HDR = push_swap.h variables.h

SRC_LIBFT = ./libft/*.c

HDR_LIBFT = ./libft/libft.h

LIB = ./libft/libft.a

all: push_swap

push_swap: $(OBJ) $(LIB)
	$(CC) $(OBJ) $(LIB) -o $@

$(LIB): $(SRC_LIBFT) $(HDR_LIBFT)
	$(MAKE) -C ./libft

%.o: %.c $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) -C ./libft clean
	rm -f $(OBJ)

fclean: clean
	$(MAKE) -C ./libft fclean
	rm -f push_swap

re: fclean all
.PHONY: clean