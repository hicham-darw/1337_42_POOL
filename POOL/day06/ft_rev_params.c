#include	<unistd.h>
#include	<stdlib.h>

void	ft_putchar(char c);
int	ft_strlen(char*);
void	ft_rev_params(int argc, char **argv);

int	main(int argc, char **argv)
{
	ft_rev_params(argc, argv);


	return 0;
}


void	ft_rev_params(int argc, char **argv){

	int i = 1;
	while(argv[i] != NULL){
		int j = 0;
		int len = ft_strlen(argv[i]);
		while(len-1 >= 0){
			ft_putchar(argv[i][len-1]);
		len--;
		}	
	i++;
	}
	
}


int ft_strlen(char * str){

	int i = 0;
	while(str[i]){
	i++;
	}
	return i;

}


void	ft_putchar(char c){

	write(1, &c, 1);
}
