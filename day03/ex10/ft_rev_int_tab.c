void	ft_swap(int*, int*);

void	ft_rev_int_tab(int *tab, int size)
{
	int i = 0;
	while(i < size){
		int j = i+1;
		while(j < size){
			if(tab[i] < tab[j]){
				ft_swap(&tab[i], &tab[j]);
			}
		j++;
		}
	i++;
	}
}

void	ft_swap(int *a, int *b){

	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
