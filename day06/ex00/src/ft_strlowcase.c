#define NULL ((void*)0)

char	*ft_strlowcase(char *str)
{
	int i ;
	
	if(str == NULL)
		return NULL;

	i = 0;
	while(str[i])
	{
		if( str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}

	return str;
}
