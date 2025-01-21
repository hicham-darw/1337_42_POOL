#include	<stdlib.h>

int	ft_atoi(char *str);
char	*ft_strrev(char *str);
char	*ft_get_binary_from_decimal(char *ptr, int n);
//-------------------prototype-----------------

char	*ft_convert_decimal_to_binary(char *nbr)
{
	char *ptr;
	int atoi_nbr, counter, count_ptr;	
	
	atoi_nbr = ft_atoi(nbr);
 	counter = 1;
	while(atoi_nbr >= 2){
		counter+=1;
		atoi_nbr = atoi_nbr/2;
	}

	atoi_nbr = ft_atoi(nbr);
	ptr = (char*)malloc(sizeof(char) * counter + 2);
	if(ptr == NULL)
		return NULL;
	return ft_get_binary_from_decimal(ptr, atoi_nbr);
}

// nbr is atoi now-----------------------------
char	*ft_get_binary_from_decimal(char *ptr, int n)
{
	int  count_ptr, rn;

        count_ptr = 0;
        while(n >= 2){
                rn = n%2;
                if(rn == 0)
                        ptr[count_ptr] = '0';
                else
                        ptr[count_ptr] = '1';
	count_ptr++;
        n = n/2;
        }
        if(n == 0)
                ptr[count_ptr] = '0';
        else
                ptr[count_ptr] = '1';
	
	count_ptr++;
        ptr[count_ptr] = '\0';

        return ft_strrev(ptr);
}
