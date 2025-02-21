#include	<stdlib.h>
#include	<unistd.h>

int	ft_putnbr(int nbr);
int ft_strlen(char *str);

int	ft_check_op(char *str, char *argv3)
{
	if(str[0] == '+' || str[0] == '-' || str[0] == '*'){
		return 0;
	}else if(str[0] == '/' || str[0] == '%'){
		if(ft_strlen(argv3) == 1 && argv3[0] == '0'){
			if(str[0] == '/')
				write(1, "stop: division by ", 18);
			else
				write(1, "stop: modulo by ", 16);
			write(1, "zero\n", 5);
			exit(0);
		}else{
			return 0;
		}
	}else{
		write(1, "0\n", 2);
		exit(0);
	}
}





/*-------------------------write system call------------
	return int (x) = write(filedescriptor, void buffer,int length);
			
	filedescriptor:	0 or stdin   == standard input
			1 or stdout === standard output
			2 or stderr == standard error

	buffer : 	string like "hicham\0" "mohammed\0"
	
	length :	(     length of buffer    )
*/
