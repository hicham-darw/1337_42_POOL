int	ft_sqrt(int nb)
{
	int i;

	if(nb == 0 || nb == 1)
		return nb;
	i = 1;
	while(i <= nb/2)
	{
		if( i * i == nb)  
			return i ;  
		i++;
	}

	return 0;	
}

