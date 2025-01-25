#ifndef	FT_BOOLEAN_H
#define FT_BOOLEAN_H
#include	<unistd.h>

typedef int	t_bool;

#define SUCCESS 0
#define false 0
#define true 1

#define EVEN_MSG "I have an even number\n"
#define	ODD_MSG "I have an odd number\n"

int	EVEN(int nbr);
void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

#endif
