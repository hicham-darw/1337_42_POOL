int	ft_iterative_power(int nb, int power)
{
	int i, result;
	
	i = 1;
	result = 1;
	if(power < 0) 
		return 0;
	if(power == 0) 
		return 1;
	while(i <= power)
	{
		result = result*nb;
		i++;
	}
	return result;
}
