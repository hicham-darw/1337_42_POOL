#define NULL ((void*)0)

char	ft_capital_char(char j, char *i);

char	*ft_strcapitalize(char	*str)
{
	int i, j;

	i = 0;
	while(str[i])
	{
		if(i == 0)
		{
			if(str[i] >= 97 && str[i] <= 122)
				str[i] = str[i]-32;
		}
		else
		{	
			j = i - 1;
			ft_capital_char(str[j], &str[i]);
		}
		i++;
	}	
	return str;
}
