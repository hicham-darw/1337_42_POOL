#include	<stdlib.h>

int	ft_strcmp(char *s1, char *s2);
void	ft_convert_to_binary(int nb);
void	ft_putnbr(int nb);
void	ft_convert_to_hexadecimal(int nb, char *base);
void	ft_convert_to_octal(int nb, char *base);

void	ft_putnbr_base(int nb, char *base)
{
	if(ft_strcmp(base, "01\0") == 0)
		ft_convert_to_binary(nb);
	else if ( ft_strcmp(base, "0123456789\0") == 0 )
		ft_putnbr(nb);
	else if ( ft_strcmp(base, "0123456789ABCDEF\0") == 0)
		ft_convert_to_hexadecimal(nb, base);
	else if ( ft_strcmp(base, "poneyvif\0") == 0)
		ft_convert_to_octal(nb, base);
	else
		exit(0);
}

