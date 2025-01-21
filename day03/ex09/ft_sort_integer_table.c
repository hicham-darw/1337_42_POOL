#include	<stdio.h>
#include	<stdlib.h>

void ft_swap(int *a, int *b);

void	ft_sort_integer_table(int* tab, int size){

	int i, j ;
	i = 0;
	while(i < size){
		j = i + 1;
		while(j < size){
			if(tab[i] > tab[j]){
				ft_swap(&tab[i], &tab[j]);
			}
		j++;
		}
	i++;
	}
}

void ft_swap(int *a, int *b){

	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
