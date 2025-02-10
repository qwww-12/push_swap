CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC =	push_swap.c				h1_tools.c				h2_tools.c				ft_handle_input.c		\
		ft_list_edit.c			ft_memleaks.c			ft_push_b.c				ft_targets.c 			\
		./Operations/pb.c		./Operations/sa.c		./Operations/rb.c		./Operations/ra.c		\
		./Operations/pa.c		./Operations/rra.c		./Operations/rrb.c 		./Operations/rr.c 		\
		./Operations/rrr.c		ft_sort_fn.c			ft_sort_last.c			\

OBJ = $(SRC:.c=.o)

HDR = push_swap.h variables.h

B_SRC = ./checker_bonus/push_swap_bn.c			./checker_bonus/h1_tools_bn.c			./checker_bonus/ft_memleaks_bn.c	\
		./checker_bonus/ft_handle_input_bn.c	./checker_bonus/ft_list_edit_bn.c		./checker_bonus/Operations/pb.c		\
		./checker_bonus/Operations/sa.c			./checker_bonus/Operations/rb.c			./checker_bonus/Operations/ra.c		\
		./checker_bonus/Operations/pa.c			./checker_bonus/Operations/rra.c		./checker_bonus/Operations/rrb.c	\
		./checker_bonus/Operations/rr.c			./checker_bonus/Operations/rrr.c		./checker_bonus/ft_ap_mv_sort_bn.c	\
		./checker_bonus/get_next_line/get_next_line.c					./checker_bonus/get_next_line/get_next_line_utils.c	\

B_OBJ = $(B_SRC:.c=.o)

B_HDR = ./checker_bonus/push_swap_bn.h			./checker_bonus/variables_bn.h			./checker_bonus/get_next_line/get_next_line.h	\

SRC_LIBFT = ./libft/*.c

HDR_LIBFT = ./libft/libft.h

LIB = ./libft/libft.a

all: push_swap

bonus: $(B_OBJ) $(LIB)
	$(CC) $(CFLAGS) $(B_OBJ) $(LIB) -o checker

push_swap: $(OBJ) $(LIB)
	$(CC) $(CFLAGS) $(OBJ) $(LIB) -o $@

$(LIB): $(SRC_LIBFT) $(HDR_LIBFT)
	$(MAKE) -C ./libft

%.o: %.c $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

./checker_bonus/%.o: ./checker_bonus/%.c $(B_HDR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) -C ./libft clean
	rm -f $(OBJ)
	rm -f $(B_OBJ)

fclean: clean
	$(MAKE) -C ./libft fclean
	rm -f push_swap
	rm -f checker

re: fclean all
.PHONY: clean