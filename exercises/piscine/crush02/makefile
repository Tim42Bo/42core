#this is a makefile

NAME = rush-02

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = *.c

OBJ = *.o

all : $(NAME) 

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -c
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
re: fclean all