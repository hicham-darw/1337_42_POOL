#include	"ft_stock_par.h"
#include	<unistd.h>
#include	<stdlib.h>
#include	<stdio.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_put_adress(char *);

void	ft_show_tab(struct s_stock_par *par)
{
	int i;
	printf("-----\n");
	i = 0;
	while(par[i].copy != NULL && par[i].size_param != 0)
	{
		printf("2222222222\n");
		ft_putstr(par[i].copy);
		printf("11111111\n");
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		//ft_put_adress(par[i]->str);
		//ft_putchar('\n');
		ft_putchar('\n');
	i++;
	}
}
//check again here .
