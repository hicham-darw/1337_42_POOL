int	ft_len_binary(int nb)
{
	int count;
	
	if(nb < 0)
		return -1;
	
	if(nb == 0 || nb == 1)
		return 1;

	count = 1;    
	while(nb > 1)
	{
		count++;
		nb/=2;
	}
	return count;
}
