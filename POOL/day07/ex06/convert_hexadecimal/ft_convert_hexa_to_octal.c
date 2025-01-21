#include	<stdlib.h>

char	*ft_convert_hexa_to_binary(char	*hex);
char	*ft_convert_binary_to_octal(char *binary);
int	ft_is_alphanumeric_hexa(char *nbr);
//-------------prototype-------------

char	*ft_convert_hexa_to_octal(char *nbr)
{
	char *ptr, *binary ;

	if(nbr == NULL || ft_is_alphanumeric_hexa(nbr) == 1)
		return NULL;

	binary = ft_convert_hexa_to_binary(nbr);
	ptr = ft_convert_binary_to_octal(binary);
	free(binary);
	return ptr;
}
