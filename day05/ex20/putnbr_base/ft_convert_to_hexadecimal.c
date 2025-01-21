#include	<stdlib.h>

void	ft_putchar(char c);

void	ft_convert_to_hexadecimal(int nb, char *base)
{
	if(nb >= 0){
		int lnb = nb/16;
		int rnb = nb%16;
		if(nb >= 16)
			ft_convert_to_hexadecimal(lnb, base);
		ft_putchar(*(base+rnb));
	}else{
		exit(0);
	}
}
