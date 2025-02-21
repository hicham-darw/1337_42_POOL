#define NULL ((void*) 0)

int	ft_str_is_uppercase(char *str)
{
	if(str == NULL) 
		return 1 ;
	
	while(*(str))
	{
		if(*(str) < 65 ||*(str) > 90)
			return 0;
		str++;
	}
	return 1;
}
