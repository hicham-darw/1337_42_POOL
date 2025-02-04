int	ft_any(char **tab, int	(*f)(char*))
{
	int i , j;
	while(tab[i])
	{
		if(f(tab[i]) == 1)
			return 1;
		else
			i++;
	}
	return 0;
}
