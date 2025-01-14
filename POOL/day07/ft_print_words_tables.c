#include	<unistd.h>


void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int i = 0;
	while(tab[i]){
		int j = 0;
		while(tab[i][j]){
			ft_putchar(tab[i][j]);
		j++;
		}
		ft_putchar('\n');
	i++;
	}
}
