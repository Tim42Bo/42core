OBJ_FILES = ft_isalpha.c	\
			ft_isdigit.c	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_isprint.c	\
			ft_strlen.c		\
			ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memmove.c	\
			ft_strlcpy.c	\

NAME = libft.a

OBJ_DIR = obj/
OBJ = $(OBJ_FILES:.c=.o)
OBJ_PRE = $(addprefix $(OBJ_DIR), $(OBJ))

CC = cc
CFLAGS = -Wall -Wextra -Werror



$(OBJ_DIR)%.o: %.c libft.h
	@mkdir -p $(OBJ_DIR)
	@echo "Compiling: $<"
	@cc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ_PRE)
	@ar r $(NAME) $(OBJ_PRE)
	@echo "Libft Done!"

all: $(NAME)

clean:
	rm -f $(OBJ_DIR)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re