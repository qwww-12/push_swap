CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRCS =	ft_atoi.c			ft_split.c				ft_strlen.c					ft_substr.c			\
		ft_strdup.c			ft_strjoin.c			ft_memcpy.c					ft_putstr_fd.c		\
		ft_isdigit.c		ft_lstnew_bonus.c		ft_lstadd_front_bonus.c		ft_lstsize_bonus.c	\
		ft_lstlast_bonus.c	ft_lstadd_back_bonus.c	ft_lstdelone_bonus.c		ft_lstclear_bonus.c	\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean
