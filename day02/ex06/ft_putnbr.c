#include	<unistd.h>


void	ft_putnbr(int nb)
{
	int lnb, rnb;
	int sign = -1;

	if(nb >= 0)
	{
		lnb = (nb/10);
		rnb = (nb%10)+48;
		if(nb >= 10)
		{
			ft_putnbr(lnb);		
		}
		write(1, &rnb, 1);
	}
	else
	{
		write(1, "-", 1);
		ft_putnbr(nb*sign);
	}
}
