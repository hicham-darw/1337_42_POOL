#include	<stdio.h>
#include	<stdlib.h>

int	ft_strlen(char *str);
int	ft_pow(int nb, int power);

int	ft_atoi_binary(char *str){

	int res = 0;
	int len = ft_strlen(str) - 1;
	int i = 0;
	int sign = 0;
	while(str[i] == ' '){
	i++;
	}
	while(str[i] == '0' || str[i] == '1'){
		if(str[i] == '1')
			res+=ft_pow(2, len-i); 
	i+=1;
	}
	return res;
}

//--------add functions for atoi binary---------

int	ft_strlen(char *str){
	
	int i = 0;
	while(str[i]){
	i+=1;
	}
	return i;
}

int	ft_pow(int nb, int power){

	if(power == 0){
		printf("nb return ==> %d\n", 1);
		return 1;
	}
	if(power == 1){
		printf("nb return ==> %d\n", nb);
		return nb;
	}
	int i = 2;
	while(i <= power){
		nb = nb * 2;
	i+=1;
	}
	printf("nb return ==> %d\n", nb);
	return nb;
}	
