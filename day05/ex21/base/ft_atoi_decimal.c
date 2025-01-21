#include	<stdlib.h>
#include	<stdio.h>

int	ft_atoi_decimal(char *str){

	int res = 0;
	int i = 0;
	int sign = 1;
	if(str == NULL)
		exit(-1);
	while(str[i] == ' '){
		i+=1;
	}
	if(str[i] == '+')
		i+=1;
	if(str[i] == '-'){
		sign = -1;
		i+=1;
	}
	while(str[i] >= 48 && str[i] <= 57 && str[i]){
		res = (res*10) + str[i] - 48;
	i+=1;
	}
	return (res*sign);
}
 
