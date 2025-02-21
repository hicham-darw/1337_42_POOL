#include	<unistd.h>

void	ft_putnbr(int nb)
{
	int ln, rn;

	if(nb == -2147483648)
	{
		write(1, "-2147483648\0", 12);
		return;
	}
	else if(nb >= 0)
	{
		ln = nb / 10 ;
		rn = (nb % 10) + 48 ;
		if(nb >= 10)
		{
			ft_putnbr(ln);		
		}
		write(1, &rn, 1);
	}
	else
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
}
