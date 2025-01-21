#include	<unistd.h>

void	ft_putchar(char c);
void	ft_print_program_name(int, char**);

int	main(int argc, char **argv)
{
	ft_print_program_name(argc, argv);
}

void	ft_print_program_name(int argc, char **argv){

	int i = 0;
	while(argv[0][i]){
		ft_putchar(argv[0][i]);
	i+=1;
	}
	ft_putchar('\n');
}
