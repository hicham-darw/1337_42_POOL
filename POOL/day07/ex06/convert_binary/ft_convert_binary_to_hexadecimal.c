#include	<stdlib.h>


void	ft_swap(char*, char*);
char	*ft_strrev(char *str);
int	ft_strlen(char *str);
char	*ft_strcpy(char *dst, char *src);
int	ft_iterative_power(int n, int pow);
char	*ft_convert_binary_to_hexadecimal(char *nbr);

////////////////////////////////////////////////////////////////
char	*ft_convert_binary_to_hexadecimal(char *nbr)
{
	char *ptr;
	int i, len, res, len_ptr , len_nbr, count_ptr;

	len = ft_strlen(nbr);
	len_ptr = (len/4)+2;
	ptr = malloc(sizeof(char) * len_ptr);
	len_nbr = len;
	//cpy string in another pointer in heap---
	char *tmp_ptr = malloc(len+1);
	ft_strcpy(tmp_ptr, nbr);
	ft_strrev(tmp_ptr);
	////// reverse string in the same pointer///////
	count_ptr = 0;
	i = 0;
	while(i < len_nbr-1){
		res = 0;
		int b = i;
		int fix_value = b;
		while(b < i+4 && tmp_ptr[b] ){
			if(tmp_ptr[b] == '1')
				res = res + ft_iterative_power(2, b - fix_value);
		b+=1;
		}
		if(res <= 9){
			ptr[count_ptr] = res+48;
			count_ptr++;	
		}else{
			ptr[count_ptr] = res+55;
			count_ptr++;
		}
	i+=4;
	}
	ptr[count_ptr] = '\0';

	return ft_strrev(ptr);
}
