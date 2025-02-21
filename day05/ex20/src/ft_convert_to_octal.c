#include <stdlib.h>

void	ft_putchar(char c);

void	ft_convert_to_octal(int nb, char *base)
{

	if(nb >= 0){
		int lnb = nb/8;
		int rnb = nb%8;
		if(nb >= 8)
			ft_convert_to_octal(lnb, base);
		ft_putchar(  *(base+rnb)  );
	}else{
		exit(0);
	}

}
