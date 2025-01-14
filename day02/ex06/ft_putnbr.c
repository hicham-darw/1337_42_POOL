#include	<unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int nbr ;
	
	if(nb >= 0){
		nbr = nb;
		unsigned int lnb = nbr/10;
		unsigned int rnb = nbr%10;
		if(nb >= 10){
			ft_putnbr(lnb);
		}
		ft_putchar(rnb+48);
	}else{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
}

