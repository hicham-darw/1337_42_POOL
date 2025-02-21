int	ft_find_next_prime(int nb)
{
	int i;

	if(nb < 0) 
		return -1;
	if(nb == 0 || nb == 1 || nb == 2) 
		return 2;
	while(i < nb)
	{
		if((nb % i) != 0)
			i++;
		i = 2;
		nb = nb+1;	
	}

	return nb;
}
