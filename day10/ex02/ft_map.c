int	*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	i = 0;
	int *new_tab = (int*)malloc(sizeof(int)* length+1);
	new_tab[len] = 0;
	while(i < length)
	{
		tab[i] = f(tab[i]);
	i++;
	}
	return (new_tab);
}
