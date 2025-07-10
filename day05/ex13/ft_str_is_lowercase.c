int	ft_str_is_lowercase(char *str)
{
	if(!str) 
		return 1;

	while(*str)
	{
		if(*str >= 97 && *str <= 122)
			str++;
		else
			return 0;
	}	
	return 1;
}
