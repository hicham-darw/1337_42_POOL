#include	<stdlib.h>
#include	<stdio.h>

int	ft_check_whitespaces(char);

char**	ft_split_whitespaces(char *str)
{
	int i , j, start_str, res, count, len, cat, k;
	char **vect;
	
	vect = NULL;
	i = 0;
	res = 1;
	start_str = 0;
	while(str[i]){
		if(i == 0){
			if(ft_check_whitespaces(str[i]) == 1){
				start_str = 1;
			}
		}else{
			if(ft_check_whitespaces(str[i]) == 1){
				res+=1;
			}
		}
	i+=1;
	}
	
	vect = (char**)malloc(sizeof(char*) * res);
	
	i = 0;
	len = 0;
	cat = 0;
	while(str[start_str]){
		if(ft_check_whitespaces(str[start_str]) == 0){  
			start_str+=1;
		}else{
			
			len = j - cat ;             			// "hicham elhamoudi\ndarwin\tmyteam"; len = 7; len = 10; 
			vect[i] = (char*)malloc(sizeof(char) * len);
			cat+=len;
			i+=1;
			start_str+=1;
		}
	}
	vect[i] = (char*)malloc(sizeof(char) * j-cat);
	vect[i+1] = NULL;

	j = 0;
	i = 0;
	k = 0;
	while(str[k]){
		if(ft_check_whitespaces(str[k]) == 0){
			vect[i][j] = str[k];
			k++;
			j++;
		}else{
			vect[i][j] = '\0';
			i+=1;
			j = 0;
			k++;
		}
	}	

	return (vect);

}

int	ft_check_whitespaces(char c){
	
	if(c == ' ' || c == '\t' || c == '\n'){
		return 1;
	}else
		return 0;

}

