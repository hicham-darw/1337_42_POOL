#include	<unistd.h>

void	ft_putchar(char c){
	write(1, &c, 1);
}
void ft_print_program_name(int argc, char **argv){

	int i = 0;
	while(argv[0][i] != '\0'){
		ft_putchar(argv[0][i]);
	i+=1;
	}
	ft_putchar('\n');
}
