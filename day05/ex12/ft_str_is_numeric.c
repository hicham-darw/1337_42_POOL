#define NULL ((void*)0)

int	ft_str_is_numeric(char *str)
{
	if(str == NULL) 
		return 1;

	while(  *(str)   )
	{
		if( *(str) < 48 || *(str) > 57)
			return 0;
		str++;
	}
	return 1;
}
