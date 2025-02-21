#define NULL ((void*)0)

int	ft_check_overflow(int res, char c, int sign);

int	ft_atoi(char *str)
{	
	int i, sign ;
	unsigned int result;
	if(str == NULL)
		return 0;
	
	sign = 1;
	result = 0;
	i = 0;
	while(str[i] == ' ')
		i++;
	if(str[i] == '+')
		i++;
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i] >= 48 && str[i] <= 57)
	{
		result =  (result * 10) + (str[i] - 48);
		if(ft_check_overflow(result, str[i + 1], sign) != 0 && str[i + 1] != '\0')
			return ft_check_overflow(result, str[i + 1] , sign) * sign;
		i++;
	}
	return (result*sign);
}
