void	ft_putchar(char c);
int	ft_strlen(char*);

void	ft_rev_params(int argc, char **argv);

int	main(int argc, char **argv)
{
	ft_rev_params(argc, argv);
	return 0;
}


void	ft_rev_params(int argc, char **argv)
{
	int	i;
	int	len;

	i = 1;
	while(i < argc && argv[i])
	{
		len = ft_strlen(argv[i]) - 1;
		while(len >= 0)
			ft_putchar(argv[i][len--]);
		ft_putchar('\n');	
		i++;
	}
}
