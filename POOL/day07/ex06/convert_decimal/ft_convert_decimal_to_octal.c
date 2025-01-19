#include	<stdlib.h>
#include	<stdio.h>

int	ft_atoi(char *str);
char	*ft_strrev(char *str);
char	*ft_get_hexadecimal_from_binary(char *, char *);
char	*ft_convert_decimal_to_octal(char *nbr);
char	*ft_convert_decimal_to_binary(char *nbr);
int	ft_iterative_power(int n, int power);

///////////////////////////////////////////////////////
char	*ft_convert_decimal_to_octal(char *nbr)
{
	char *ptr, *binary;
	int	i, count, atoi_nbr, sign, b, fix_value, res;

	count = 1;
	atoi_nbr = ft_atoi(nbr);// 50
	sign = 1;
	if(atoi_nbr < 0){
		sign = -1;
		atoi_nbr *= (-1);
	}
	while(atoi_nbr >= 8){
		count++;
	atoi_nbr = atoi_nbr/8;
	}
	ptr = (char*)malloc(sizeof(char) * count+2);
	binary = ft_convert_decimal_to_binary(nbr);
	return ft_get_hexadecimal_from_binary(ptr, binary);
}

/// get base 16 from binary -------------------------------
char *ft_get_hexadecimal_from_binary(char *ptr, char *binary)
{
	int i, count, b, fix_value, res;
	if(ptr == NULL || binary == NULL)
		return NULL;
	binary = ft_strrev(binary);//reverse here not above function;
        i = 0;
        count = 0;
        while(binary[i]){
                b = i;
                fix_value = b;
                res = 0;
                while(b < i+3 && binary[b]){
                        if(binary[b] == '1')
                                res = res + ft_iterative_power(2, b-fix_value);
                b++;
                }
                ptr[count] = res+48;
                count++;
        i = b;
        }
        free (binary);
        ptr[count] = '\0';
        return ft_strrev(ptr);
}
