#include	<stdlib.h>

int	ft_atoi(char *str);
char	*ft_strrev(char *str);
char	*ft_convert_decimal_to_binary(char *nbr);
char	*ft_binary_and_reverse(char *ptr, int n);

////////////////////////////////////////////////
char	*ft_convert_decimal_to_binary(char *nbr)
{
	char *ptr;
	int atoi_nbr, counter, sign, count_ptr;	
	
	atoi_nbr = ft_atoi(nbr);
	sign = 1;
	if(atoi_nbr < 0){
		sign = -1;
		atoi_nbr = atoi_nbr * (-1);
	}
 	
	counter = 1;
	while(atoi_nbr >= 2){
		counter+=1;
		atoi_nbr = atoi_nbr/2;
	}

	atoi_nbr = ft_atoi(nbr);
	ptr = (char*)malloc(sizeof(char) * counter + 2);
	if(ptr == NULL)
		exit(0);
	return ft_binary_and_reverse(ptr, atoi_nbr);
}

// nbr is atoi now-----------------------------
char	*ft_binary_and_reverse(char *ptr, int n)
{
	int sign, count_ptr, rn;
	sign = 1;
        if(n < 0){
                sign = -1;
                n *= (-1);
        }
        count_ptr = 0;
        while(n >= 2){
                rn = n%2;
                if(rn == 0){
                        ptr[count_ptr] = '0';
                        count_ptr++;
                }else{
                        ptr[count_ptr] = '1';
                        count_ptr++;
                }
        n = n/2;
        }
        if(n == 0){
                ptr[count_ptr] = '0';
                count_ptr++;
        }else{
                ptr[count_ptr] = '1';
                count_ptr++;
        }
        if(sign < 0){
                ptr[count_ptr] = '1';
                count_ptr++;
        }else{
                ptr[count_ptr] = '0';
                count_ptr++;
        }
        ptr[count_ptr] = '\0';
        ft_strrev(ptr);
        return ptr;
}
