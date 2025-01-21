#include	<stdlib.h>


int	ft_is_alphanumeric_hexa(char *hex);
char	*ft_convert_hexa_to_binary(char *hex);
char	*ft_convert_binary_to_decimal(char *binary);
//----------------prortype------------------------

char	*ft_convert_hexa_to_decimal(char *nbr)
{
	char *ptr, *binary;
	int i, len, res, len_nbr;
	if(ft_is_alphanumeric_hexa(nbr) == 1)
		return NULL;
	binary = ft_convert_hexa_to_binary(nbr);
	ptr = ft_convert_binary_to_decimal(binary);
	free(binary);
	return ptr;
}
