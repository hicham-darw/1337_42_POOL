#include	<unistd.h>
#include	<stdlib.h>

void	ft_putchar(char);

void	ft_print_params(int argc, char **argv){
	
	int i = 0;
	while(argv[i] != NULL){
		int j = 0;
		while(argv[i][j] != '\0'){
			ft_putchar(argv[i][j]);
		j++;
		}
		ft_putchar('\n');
	i++;
	}
}


