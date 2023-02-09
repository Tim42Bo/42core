# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 04:06:14 by tbornema          #+#    #+#              #
#    Updated: 2023/02/09 15:24:41 by tbornema         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJ_FILES = ft_abs.c		\
			ft_atoi.c		\
			ft_bzero.c		\
			ft_calloc.c		\
			ft_countwords.c	\
			ft_indexlen.c	\
			ft_isalnum.c	\
			ft_isalpha.c	\
			ft_isascii.c	\
			ft_ischars.c	\
			ft_isdigit.c	\
			ft_isprint.c	\
			ft_isspace.c	\
			ft_itoa.c		\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_memcpy.c		\
			ft_memmove.c	\
			ft_memset.c		\
			ft_putchar_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\
			ft_putstr_fd.c	\
			ft_skipc.c		\
			ft_split.c		\
			ft_strcat.c		\
			ft_strchr.c		\
			ft_strcpy.c		\
			ft_strdup.c		\
			ft_strindexdup.c\
			ft_striteri.c	\
			ft_strjoin.c	\
			ft_strlcat.c	\
			ft_strlcpy.c	\
			ft_strlen.c		\
			ft_strmapi.c	\
			ft_strncmp.c	\
			ft_strnstr.c	\
			ft_strtrim.c	\
			ft_substr.c		\
			ft_tolower.c	\
			ft_toupper.c	\
			ft_wordlen.c	\
			

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