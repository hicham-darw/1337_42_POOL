#include	<stdlib.h>


char	*ft_convert_octal_to_binary(char *octal);
char	*ft_convert_binary_to_decimal(char *binary);
//--------------prototype--------------------

char	*ft_convert_octal_to_decimal(char *nbr)
{
	char *binary , *ptr;

	if(nbr == NULL)
		return NULL;
	binary = ft_convert_octal_to_binary(nbr);
	ptr = ft_convert_binary_to_decimal(binary);
	free (binary);
	return ptr;
}
