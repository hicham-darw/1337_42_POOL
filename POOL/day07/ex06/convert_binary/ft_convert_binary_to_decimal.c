int	ft_strlen(char *str);
int	ft_iterative_power(int n, int power);
int	ft_nbrlen(int nb);
char*	ft_convert_binary_to_decimal(char *nbr);
///////// prototyped /////////////////////////



char* ft_convert_binary_to_decimal(char* nbr)
{
	char *ptr;
	int i, len, res, len_res, l_res, r_res;
	len = ft_strlen(nbr);

	res = 0;
	i = 0;
	while(nbr[i]){
		if(nbr[i] == '1')
			res = res + ft_iterative_power(2, (len-1)-i);
	i++;
	}
	
	len_res = ft_nbrlen(res);
	ptr = (char*)malloc(sizeof(char) * len_res+1);
	while(res >= 0 && len_res >= 0){
	        r_res = res%10;
		ptr[len_res] = r_res+48;
		res = res/10;
		len_res--;
	}
	ptr[len_res+1] == '\0';
	
	return ptr;
}

/// ft_nbrlen-----------
int	ft_nbrlen(int nb)
{
	//1000
	int count = 1;
	if(nb < 0){
		nb *= (-1);
	}
	while(nb >= 10){
		count+=1;
		nb /= 10;
	}
	return count;
}
