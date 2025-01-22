#include	<stdlib.h>


int	ft_strcmp(char *s1, char *s2);
//----------------------------------------
char*	ft_convert_binary_to_decimal(char*);
char*	ft_convert_binary_to_hexadecimal(char*);
char*	ft_convert_binary_to_octal(char*);
//-----------------------------------------------
char*	ft_convert_decimal_to_binary(char*);
char*	ft_convert_decimal_to_hexadecimal(char*);	
char*	ft_convert_decimal_to_octal(char*);
//-----------------------------------------------
char*	ft_convert_hexa_to_binary(char*);
char*	ft_convert_hexa_to_decimal(char*);
char*	ft_convert_hexa_to_octal(char*);
//-----------------------------------------------
char*	ft_convert_octal_to_binary(char*);
char*	ft_convert_octal_to_decimal(char*);
char*	ft_convert_octal_to_hexadecimal(char*);
//-------------prototypes--------------------------

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int i;
	if(base_from == NULL || base_to == NULL || nbr == NULL)
		return NULL;
	if(ft_strcmp(base_from, "01\0") == 0){
		if( ft_strcmp(base_to, "0123456789\0") == 0)
			return ft_convert_binary_to_decimal(nbr);
		else if(ft_strcmp(base_to, "0123456789ABCDEF\0") == 0)
			return ft_convert_binary_to_hexadecimal(nbr);
		else if(ft_strcmp(base_to, "01234567\0") == 0)
			return ft_convert_binary_to_octal(nbr);
		else if(ft_strcmp(base_to, "01\0") == 0)
			return nbr;
		else
			return NULL;
	}else if(ft_strcmp(base_from, "0123456789\0") == 0){
		if(ft_strcmp(base_to, "01\0") == 0)
			return ft_convert_decimal_to_binary(nbr);
		else if(ft_strcmp(base_to, "0123456789\0") == 0)
			return (nbr);
		else if(ft_strcmp(base_to, "0123456789ABCDEF\0") == 0)
			return ft_convert_decimal_to_hexadecimal(nbr);
		else if(ft_strcmp(base_to, "01234567\0") == 0)
			return ft_convert_decimal_to_octal(nbr);
		else
			return NULL;
		
	}else if(ft_strcmp(base_from, "0123456789ABCDEF\0") == 0){
		if(ft_strcmp(base_to, "01\0") == 0)
			return ft_convert_hexa_to_binary(nbr);
		else if (ft_strcmp(base_to, "0123456789\0") == 0)
			return ft_convert_hexa_to_decimal(nbr);
		else if(ft_strcmp(base_to, "0123456789ABCDEF\0") == 0)
			return (nbr);
		else if(ft_strcmp(base_to, "01234567\0") == 0)
			return ft_convert_hexa_to_octal(nbr);
		else
			return NULL;
		
	}else if( ft_strcmp(base_from, "01234567\0") == 0){
		if(ft_strcmp(base_to, "01\0") == 0)
			return ft_convert_octal_to_binary(nbr);
		else if(ft_strcmp(base_to, "0123456789\0") == 0)
			return ft_convert_octal_to_decimal(nbr);
		else if(ft_strcmp(base_to, "0123456789ABCDEF\0") == 0)
			return ft_convert_octal_to_hexadecimal(nbr);
		else if(ft_strcmp(base_to, "01234567\0") == 0)
			return (nbr);
		else
			return NULL;
		
	}else{
		return NULL;
	}
}
