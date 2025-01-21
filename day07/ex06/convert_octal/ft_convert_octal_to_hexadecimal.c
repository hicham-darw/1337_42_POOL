#include	<stdlib.h>


char	*ft_convert_octal_to_binary(char *nbr);
char	*ft_convert_binary_to_hexadecimal( char *binary);
//------------prototype------------------------

char	*ft_convert_octal_to_hexadecimal(char *nbr)
{
	char *binary, *ptr;
	binary = ft_convert_octal_to_binary(nbr);
	ptr = ft_convert_binary_to_hexadecimal(binary);
	free (binary);
	return (ptr);
}

