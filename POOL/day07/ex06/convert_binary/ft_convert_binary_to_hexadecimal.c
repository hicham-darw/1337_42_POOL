#include	<stdlib.h>


char	*ft_strcpy(char *dst, char *src);
char	*ft_strrev(char *str);
int	ft_strlen(char *str);
int	ft_iterative_power(int n, int pow);
char	*ft_convert_binary_to_hexadecimal(char *nbr);
char	*ft_get_hexadecimal_from_binary(char *ptr, char *rev);
//------------------prototype---------------------------------

char	*ft_convert_binary_to_hexadecimal(char *nbr)
{
	char *ptr;
	int  len, len_ptr ;

	len = ft_strlen(nbr);
	len_ptr = (len/4)+2;
	ptr = malloc(sizeof(char) * len_ptr);
	//cpy string in another pointer in heap---
	char *tmp_ptr = malloc(len+1);
	ft_strcpy(tmp_ptr, nbr);
	ft_strrev(tmp_ptr);
	////// reverse string in the same pointer///////
        return ft_get_hexadecimal_from_binary(ptr, tmp_ptr);
}


// get hexa from reverse binary------
char	*ft_get_hexadecimal_from_binary(char *ptr, char *rev)
{
	int i, count_ptr, res, b, fix_value;
	if(ptr == NULL || rev == NULL)
		return NULL;
	count_ptr = 0;
        i = 0;
        while(rev[i]){
                res = 0;
                b = i;
                fix_value = b;
                while(b < i+4 && rev[b] ){
                        if(rev[b] == '1')
                                res = res + ft_iterative_power(2, b - fix_value);
                b+=1;
                }
                if(res <= 9)
                        ptr[count_ptr] = res+48;
                else
                        ptr[count_ptr] = res+55;
        count_ptr++;
        i = b;
        }
        ptr[count_ptr] = '\0';
	free(rev);
        return ft_strrev(ptr);
}






