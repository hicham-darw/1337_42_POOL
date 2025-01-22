#include	<unistd.h>
#include	<stdlib.h>


void	ft_putchar(char);
void	ft_swap(char*, char*);
void	ft_sort_params(int, char**);



int	main(int argc, char **argv){

	ft_sort_params(argc, argv);

	return 0;
}



void	ft_sort_params(int ac, char **av){

	int i, j, b;
	
	i = 1;
	while(av[i]){
		j = 0;
		while(av[i][j]){
			b = j+1;
			while(av[i][b]){
				if(av[i][j] > av[i][b])
					ft_swap(&av[i][j], &av[i][b]);
			b++;
			}
		j++;
		}
		j = 0;
		while(av[i][j])
			ft_putchar(av[i][j++]);
		ft_putchar(32);
	i+=1;
	}
	ft_putchar('\n');
}
