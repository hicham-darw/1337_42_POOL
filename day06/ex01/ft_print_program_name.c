#include	<unistd.h>

void	ft_putchar(char c);
void	ft_print_program_name(int argc, char **argv);

int	main(int argc, char **argv)
{
	ft_print_program_name(argc, argv);
}

void	ft_print_program_name(int argc, char **argv){

	int i, j ;
	i = 0;
	while(   i < argc - (argc-1) ){
		j = 0;
		while(argv[i][j])
			ft_putchar(argv[i][j++]);
	i++;
	}
	ft_putchar('\n');
}
