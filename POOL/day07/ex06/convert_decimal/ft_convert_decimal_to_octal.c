#include	<stdlib.h>


char	*ft_convert_decimal_to_binary(char *nbr);
char	*ft_convert_binary_to_octal(char *binary);
//----------------prototype-------------------------

char	*ft_convert_decimal_to_octal(char *nbr)
{
	char *ptr, *binary;

	binary = ft_convert_decimal_to_binary(nbr);
	ptr = ft_convert_binary_to_octal(binary);
	free (binary);
	
	return (ptr);
}
