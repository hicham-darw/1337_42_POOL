#include	<stdlib.h>

int	ft_atoi(char *str)
{	
	int i, result, sign;

	if(str == NULL)
		return 0;
	result = 0;
	sign = 1;
	i = 0;
	while(str[i] == ' ')
		i++;
	if(str[i] == '+'){
		i++;
	}else if(str[i] == '-'){
		sign = -1;
		i++;
	}
	while(str[i] >= 48 && str[i] <= 57){
		result =  (result * 10) + (str[i] - 48);
	i++;
	}
	return (result*sign);
}
