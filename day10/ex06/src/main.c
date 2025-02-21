#include	"includes/lib.h"

int	main(int ac, char **av)
{
	int value1, value2; 
	float result;
	if(ac < 4 || ac > 4){
		exit(0);
	}else if(ft_check_op(av[2], av[3]) != 0){
		write(2, "second argument: not operator\n", 30);
		exit(0);
	}else{
		value1 = ft_atoi(av[1]);
		value2 = ft_atoi(av[3]);
		switch (av[2][0]){
			case '+': result = value1 + value2;
				break;
			case '-': result = value1 - value2;
				break;
			case '*': result = value1 * value2;
				break;
			case '%': result = (value1 % value2);
				break;
			case '/': result = (value1 / value2);
				break;
			default : exit(0);
				break;
		}
	}
	ft_putnbr(result);
	write(1, "\n", 1);

	return 0;
}
