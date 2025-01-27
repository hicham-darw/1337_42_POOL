#ifndef	FT_STOCK_PAR_H
#define	FT_STOCK_PAR_H
#include	<stdlib.h>
#include	<stdio.h>
typedef struct s_stock_par
{	
	int	size_param;
	char	*str;
	char	*copy;
}	t_stock_par;

struct s_stock_par	*ft_param_to_tab(int ac, char **av);
int	ft_strlen(char *str);
char	*ft_strcpy(char *dst, char *src);
char	**ft_split_whitespaces(char *str);
char	*ft_strncpy(char *dst, char *src, unsigned int n);
void	ft_show_tab(struct s_stock_par *par);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
//void	ft_put_address(char*);
void	ft_put_str_vector(char **tab);
void	ft_putstr(char *str);
#endif
