void	ft_putchar(char c);

void	ft_putnbr(int nb)
{

	if(nb >= 0){
		int lnb = nb/10;
		int rnb = nb%10;
		if(nb >= 10)
			ft_putnbr(lnb);
		ft_putchar(rnb+48);
	}else{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}


}

