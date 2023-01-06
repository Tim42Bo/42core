CC = gcc
#CFLAGS = -Wall -Wextra -Werror -fsanitize=leak -fsanitize=undefined -fsanitize=address -g3 -I.
#OFLAGS = -Wall -Wextra -Werror -fsanitize=leak -fsanitize=undefined -fsanitize=address -g3 -I.
CFLAGS = -Wall -Wextra -Werror -I.
OFLAGS = -Wall -Wextra -Werror -I.


DEPS = functions.h
OBJECTS = main.o ft_read_info.o ft_create_map_int.o ft_create_map_char.o ft_calc_map.o ft_print.o\
	ft_execute.o ft_memset.o ft_readstdin.o ft_toolbox.o ft_writefile.o ft_free.o ft_check1.o \
	ft_check2.o
NAME = bsq


%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJECTS)
	$(CC) $(OFLAGS) -o $@ $^

all: $(NAME)

clean:
	-rm -f $(OBJECTS)

fclean: clean
	-rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean


# %.o	--> every .o file
# %.c	--> every .c file
# -c	--> create object file
# -o	--> output, name of file
# -I.   --> gcc will look in the current directory (.) for the include file functions.h
# $@	--> left side of : ()
# $^	--> right side of : ()
# $<	--> the first item in the dependencies list ???
# .PHONY
