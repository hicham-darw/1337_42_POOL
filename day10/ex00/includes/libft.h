#ifndef LIBFT_H
#define LIBFT_H

#include	<unistd.h>
#include	<fcntl.h>
#include	<stdlib.h>
#include	<string.h>

int	ft_atoi(char *str);
int	ft_iterative_power(int n, int power);
void	ft_putchar(char c);
void	ft_putnbr(int nbr);
void	ft_putstr(char *str);
int	ft_recursive_power(int n, int power);
void	ft_sort_integer_table(int *tab, int size);
int	ft_sqrt(int n);
char	*ft_strcat(char *dst, char *src);
int	ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dst, char *src);
int	ft_str_is_alpha(char *str);
int	ft_str_is_numeric(char *str);
int	ft_str_is_printable(char *str);
int	ft_strlcat(char *dst, char *src, unsigned int size);
int	ft_strlcpy(char *dst, char *src, unsigned int size);
char	*ft_strlowcase(char *str);
char	*ft_strncat(char *dst, char *src, int n);
int	ft_strncmp(char *s1, char *s2, int n);
char	*ft_strncpy(char *dst, char *src, int n);
char	*ft_strrev(char *str);
char	*ft_strstr(char *src, char *to_find);
char	*ft_strupcase(char *str);
void	ft_swap(char *a, char *b);

#endif
