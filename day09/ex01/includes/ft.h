#ifndef FT_H
#define FT_H
#include	<unistd.h>
#include	<stdlib.h>

int	ft_atoi(char *str);
int	ft_iterative_power(int n, int power);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int	ft_recursive_power(int nb, int power);
void	ft_sort_integer_table(int *table, int size);
int	ft_sqrt(int nb);
char	*ft_strcat(char *dst, char *src);
char	*ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dst, char *src);
int	ft_str_is_alpha(char *str);
int	ft_str_is_numeric(char *str);
int	ft_str_is_printable(char *str);
unsigned int	ft_strlcat(char *dst, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size);
int	ft_strlen(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strncat(char *dst, char *src, int nb);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strncpy(char *dst, char *src, unsigned int n);
char	*ft_strrev(char *str);
char	*ft_strstr(char *src, char *to_find);
char	*ft_strupcase(char *str);
void	ft_swap(char *a, char *b);

#endif
