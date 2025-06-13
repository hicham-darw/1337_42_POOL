#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H
#include	<unistd.h>

typedef int t_bool;
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define TRUE 1
#define FALSE 0

int	EVEN(int nb)
{
	if(nb % 2 == 0)
		return 1;
	else
		return 0;
}
t_bool	ft_is_even(int nb);
#define SUCCESS 0
#endif
