/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbornema <tbornema@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:06:03 by akekesi           #+#    #+#             */
/*   Updated: 2022/07/13 23:00:27 by tbornema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

void	ft_print_main(char *path, int row, int col, char *chars);
int		**ft_create_map_int(char *path, int row, int col, char *chars);
int		**ft_create_empty_map_int(int row, int col);
char	**ft_create_map_char(char *path, int row, int col);
char	**ft_create_empty_map_char(int row, int col);
int		ft_char_to_int(char c, char fee, char obstacle);
void	ft_print_map_int(int **map, int row, int col);
void	ft_print_map_char(char **map, int row, int col);
void	ft_calc_map(int **map, int row, int col);
int		ft_calc_pos(int **map, int i_row, int i_col);
int		ft_min(int *values);
void	ft_create_result_map(int **map_int, char **map_char, int *rc, char *c);
void	ft_get_pos(int **map, int row, int col, int *pos);
void	ft_fill_map_char(char **map_char, int *pos, int steps, char *chars);
int		ft_check_open(char *path);
int		ft_length_to_char(char *path, char c_to);
int		ft_get_row(char *path);
int		ft_get_col(char *path);
void	ft_get_chars(char *path, char *chars);
int		ft_length_str(char *str);
char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char	*str);
char	*ft_strcpy(char *dest, char *src);
int		ft_writefile(char *array);
char	*ft_readstdin(void);
void	*ft_memset(void *s, int c, unsigned int len);
void	ft_execute(char *path, char *chars);
void	ft_freechar(char **map, int i_row, int row);
void	ft_freeint(int **map, int i_row, int row);
int		ft_check_main(char *path, char *chars);
int		ft_check_open(char *path);
int		ft_check_chars(char *chars);
int		ft_check_is_printable(char c);
int		ft_check_info(char *path);
int		ft_check_row(char *path);
int		ft_check_main_info(char *path, char *chars);
int		ft_check_main_map(char *path, char *chars, int row, int col);
int		ft_check_25(char *chars, char c);
int		ft_check_is_chars(char *chars, char c);
#endif
