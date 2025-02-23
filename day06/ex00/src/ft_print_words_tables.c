void	ft_putstr(char *);

void	ft_print_words_tables(char **tab)
{
	int i ;

	i = 0;
	while(tab[i])
	{
		ft_putstr(tab[i]);
		ft_putstr("\n");
		i++;
	}
}
