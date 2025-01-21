int	ft_atoi(char *str){
	
	int result = 0;
	int sign = 1;
	int i = 0;
	while(str[i] == ' '){
		i+=1;
	}
	if(str[i] == '+')
		i+=1;
	if(str[i] == '-'){
		sign = -1;
		i+=1;
	}
	while(str[i] >= 48 && str[i] <= 57){
		result = (result*10) + str[i] - 48;
	i+=1;
	}
	return(result * sign);
}
