#include	<stdlib.h>

int	ft_atoi_octal(char *str){

	unsigned int res = 0;
	int i = 0;
	if(str == NULL)
		return 0;
	while(str[i] == ' '){
		i+=1;
	}
	while(str[i] >= 48 && str[i] <= 55){
		res = (res*8) + str[i] - 48;
	i+=1;
	}
	return (signed)res;
}
