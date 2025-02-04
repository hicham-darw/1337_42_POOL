int	*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	i = 0;
	int *new_tab = (int*)malloc(sizeof(int)* len+1);
	new_tab[len] = 0;
	while(i < length)
	{
		tab[i] = f(tab[i]);
	i++;
	}
	tab[i] = 0;
	return (tab);
}
