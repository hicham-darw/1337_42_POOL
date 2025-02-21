void	ft_swap_int(int *a, int *b);

void	ft_sort_integer_table(int* tab, int size)
{
	int i, j ;
	
	i = 0;
	while(i < (size - 1))
	{
		j = i + 1;
		while(j < (size - 1))
		{
			if(tab[i] > tab[j])
				ft_swap_int(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}
