#include	<stdio.h>
#include	<stdlib.h>

int	ft_strlen(char *str);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strrev(char *str);
int	ft_iterative_power(int n, int power);
char	*ft_convert_binary_to_octal(char *nbr);

///////////////////////////////////////////////////////////////
char	*ft_convert_binary_to_octal(char *nbr)
{
	char *ptr, *rev_nbr;
	int i , len_nbr, len_ptr, res, count_ptr;
	len_nbr = ft_strlen(nbr);
	len_ptr = (len_nbr/3)+2;
	ptr = malloc(sizeof(char) * len_ptr);
	
	rev_nbr = (char*)malloc(sizeof(char) * len_nbr+1);//allocation reverse string;
	ft_strcpy(rev_nbr, nbr);// cpy buffer
	ft_strrev(rev_nbr);     // reverse buffer;
	
	count_ptr = 0;
	i = 0;
	while( rev_nbr[i]){
		int b = i;
		int fix_value = b;
		res = 0;
		while(b < i+3 && b < rev_nbr[b]){
			if(rev_nbr[b] == '1')
				res = res + ft_iterative_power(2, b-fix_value);	
		b++;
		}
		ptr[count_ptr] = res+48;
		count_ptr+=1;
	i = b;
	}
	ptr[count_ptr] = '\0';
	// free rev_nbr;
	free (rev_nbr);	
	ft_strrev(ptr);
	return (ptr);
}
