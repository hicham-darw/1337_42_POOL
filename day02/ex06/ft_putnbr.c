#include	<unistd.h>

void ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int nbr;
	unsigned int lnbr, rnbr;

	if((unsigned int)nb > 0){
		nbr = (unsigned int)(nb);
	}
	if(nb < 0){
		write(1, "-", 1);
		nbr = (unsigned int)(nb * (-1));
	}
	lnbr = nbr/10;
	rnbr = nbr%10;
	if(nbr >= 10){
		ft_putnbr(lnbr);
	}
	ft_putchar(rnbr+48);
}
