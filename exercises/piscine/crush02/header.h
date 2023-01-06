#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define initial_buffer_size (1)
#define maxium_buffer_size (4 * 1024 * 1024)

int	ft_numeric(char *str);
int	ft_strlen(char	*str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
char	*ft_trim(char *buf);
char	*ft_strcpy(char *dest, char *src);
char	ft_parseones(char *cleandict, char *ptr, int len);
char	ft_parsetens(char *cleandict, char *ptr, int len);
char	ft_parse20(char *cleandict, char *ptr, int len);
char	ft_parsehundreds(char *cleandict, char *ptr, int len);
char	ft_parsethousands(char *cleandict, char *ptr, int len);

#endif
