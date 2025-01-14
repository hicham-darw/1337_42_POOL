#include	<stdlib.h>
#include	<stdio.h>
#include	<stdbool.h>

int	ft_strcmp(char *s1, char *s2);
int	ft_strlen(char *str);
int	ft_atoi_binary(char *str);
int	ft_atoi_decimal(char *str);
int	ft_atoi_octal(char *str);
int	ft_atoi_hexadecimal(char *str);

int	ft_atoi_base(char *str, char *base)
{
	
	if(ft_strcmp(base, "01\0") == 0){
		return ft_atoi_binary(str);				
	}else if (ft_strcmp(base, "0123456789\0") == 0){
		return ft_atoi_decimal(str);
	}else if (ft_strcmp(base, "0123456789ABCDEF\0") == 0){
		return ft_atoi_hexadecimal(str);
	}else if (ft_strcmp(base, "01234567\0") == 0){
		return ft_atoi_octal(str);
	}else{ 
		printf("error: \n");
		return -1;
	}
}
