void	ft_putchar(char);
void	ft_putstr(char *str);
void	ft_swap(char *, char *);
void	ft_sort_params(int, char **);



int	main(int argc, char **argv){

	ft_sort_params(argc, argv);

	return 0;
}



void	ft_sort_params(int ac, char **av)
{
	int	i;
	int	j;
	int	b;
	
	i = 1;
	while(i < ac && av[i])
	{
		j = 0;
		while(av[i][j])
		{
			b = j+1;
			while(av[i][b])
			{
				if(av[i][j] > av[i][b])
					ft_swap(&av[i][j], &av[i][b]);
				b++;
			}
			j++;
		}
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
}
