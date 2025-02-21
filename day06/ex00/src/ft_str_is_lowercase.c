#define NULL ((void*) 0)

int	ft_str_is_lowercase(char *str)
{
	if(str == NULL) 
		return 1;

	while(*str)
	{
		if(*(str) < 97 || *(str) > 122)
			return 0;
		str++;
	}	
	return 1;
}
