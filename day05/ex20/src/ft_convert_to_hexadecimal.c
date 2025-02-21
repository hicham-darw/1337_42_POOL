#include	<stdlib.h>

void	ft_putchar(char c);

void	ft_convert_to_hexadecimal(int nb, char *base)
{
	int lnb, rnb;
	
	if(nb >= 0)
	{
		lnb = nb/16;
		rnb = nb%16;
		if(nb >= 16)
			ft_convert_to_hexadecimal(lnb, base);
		ft_putchar(*(base+rnb));
	}
	else
	{
		exit(0);
	}
}
