#include	<stdlib.h>

void	ft_putchar(char c);

void	ft_convert_to_binary(int nb)
{
	static int i = 0;
	while(i < 1){
		if(nb >= 0){
			ft_putchar('0');
		}else{
			nb *= -1;
			ft_putchar('1');
		}
	i+=1;
	}	

	if(nb >= 0){
		int lnb = nb/2;
		int rnb = nb%2;
		if(nb >= 2)
			ft_convert_to_binary(lnb);
		ft_putchar(rnb+48);
	}else{
		ft_putchar('1');
		ft_convert_to_binary(nb*-1);
	}

}
