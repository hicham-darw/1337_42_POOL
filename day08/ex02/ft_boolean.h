#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H
#include	<unistd.h>

typedef int t_bool;
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define TRUE (1==1)
#define FALSE (!TRUE)

int	EVEN(int nb);
t_bool	ft_is_even(int nb);
#define SUCCESS 0
#endif
