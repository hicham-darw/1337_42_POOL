#include	<stdlib.h>

int	ft_atoi_hexadecimal(char *str){
	
	int res = 0;
	int i = 0;

	while(str[i] == ' '){
		i+=1;
	}
	while(  (str[i] >= 48 && str[i] <= 57)  || (str[i] >= 65 && str[i] <= 70)  )
	{
		if(str[i] >= 48 && str[i] <= 57)
			res = (res*16) + str[i] - 48;
		else
			res = (res*16) + str[i] - 55;
	i+=1;
	}
	return res;
}
