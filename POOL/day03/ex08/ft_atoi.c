#include	<stdlib.h>

int	ft_atoi(char *str){
	
	int i, result, sign;
	
	result = 0;
	sign = 1;
	if(str == NULL){
		return 0;
	}
	
	i = 0;
	while(str[i]){
		if(str[i] == ' '){
			i+=1;
		}else if(str[i] == '+'){
			i+=1;
		}else if(str[i] == '-'){
			sign = -1;
			i+=1;
		}else{
			if(str[i] <= 48 || str[i] >= 57){
				return 0;
			}else{
				while(str[i] >= 48 && str[i] <= 57 && str[i]){
					result = (result*10) + str[i] - 48;
					
				i+=1;
				}
			}
		}
	}	
	return (result*sign);
}
