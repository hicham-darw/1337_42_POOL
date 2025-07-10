#include "my_lib.h"

void	ft_putnbr_base(int nbr, char *base)
{
	if(!base)
		return;
	if(!ft_is_valid(base))
		return;
	if(nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if(nbr >= ft_strlen(base))
		ft_putnbr_base((nbr / ft_strlen(base)), base);
	write(1, &base[nbr % ft_strlen(base)], 1);
}
