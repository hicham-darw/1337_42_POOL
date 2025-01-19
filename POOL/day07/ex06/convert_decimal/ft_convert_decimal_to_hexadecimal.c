#include	<stdlib.h>

int	ft_atoi(char *nbr);
char	*ft_convert_decimal_to_binary(char *nbr);
char	*ft_strrev(char *str);
int	ft_strlen(char *str);
int	ft_iterative_power(int n, int power);
char	*ft_binary_to_hexa(char*, char*);
char	*ft_convert_decimal_to_hexadecimal(char *nbr);

//////////////////////////////////////////////////////////
char*	ft_convert_decimal_to_hexadecimal(char *nbr)
{
	char *ptr, *binary;
	int atoi_nbr, count, sign, i;
	atoi_nbr = ft_atoi(nbr);
	sign = 1;
	if(atoi_nbr < 0){
		sign = -1;
		atoi_nbr*=(-1);
	}
	count = 1;
	while(atoi_nbr >= 16){
		count++;
	atoi_nbr = atoi_nbr/16;
	}
	ptr = (char*)malloc(sizeof(char) * count + 2);
	binary = ft_convert_decimal_to_binary(nbr);
	ft_strrev(binary);// reverse string to start first index
	
	return ft_binary_to_hexa(ptr, binary);
}


char	*ft_binary_to_hexa(char *ptr, char *binary)
{
	int i , count_ptr, res;
	if(ptr == NULL || binary == NULL)
		return NULL;
        i = 0;
	count_ptr = 0;
        while(binary[i]){
                int b = i;
                int fix = b;
                res = 0;
                while(b < i+4 && b < ft_strlen(binary)){
			if(binary[b] == '1')
                        	res = res + ft_iterative_power(2, b-fix);
		b++;
                }
		if(res < 10){
			ptr[count_ptr] = res+48;
			count_ptr++;	
		}else{
			ptr[count_ptr] = res+55;
			count_ptr++;
		}
	i=b;
        }
	ptr[count_ptr] = '\0';
	free(binary);
	return ft_strrev(ptr);
}
