void	ft_putchar(char);
void	ft_print_params(int argc, char **argv);

int	main(int argc, char **argv)
{
	ft_print_params(argc, argv);
}

void	ft_print_params(int argc, char **argv)
{
	int	i;
	int	j;

	if(argc <= 1)
		return ;
	i = 1;
	while (i < argc && argv[i])
	{
		j = 0;
		while (argv[i][j] != '\0')
			ft_putchar(argv[i][j++]);
		ft_putchar('\n');
		i++;
	}
}


