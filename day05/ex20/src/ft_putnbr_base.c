#include	<stdio.h>

int	ft_strlen(char *str);
int	ft_strcmp(char *s1, char *s2);
void	ft_convert_to_binary(int nb, char sign);
void	ft_putnbr(int nb);
void	ft_convert_to_hexadecimal(int nb, char *base);
void	ft_convert_to_octal(int nb, char *base);

void	ft_putnbr_base(int nb, char *base)
{
	

	if(ft_strcmp(base, "01\0") == 0 && ft_strlen(base) == 2)
	{
		if(nb >= 0)
			ft_convert_to_binary(nb, '+');
		else
			ft_convert_to_binary((-nb), '-');
	}
	else if ( ft_strcmp(base, "0123456789\0") == 0  && ft_strlen(base) == 10)
	{
		ft_putnbr(nb);
	}
	else if ( ft_strcmp( base, "0123456789ABCDEF\0") == 0 && ft_strlen(base) == 16)
	{
		ft_convert_to_hexadecimal(nb, base);
	}
	else if ( ft_strcmp(base, "poneyvif\0") == 0 && ft_strlen(base) == 8)
	{
		ft_convert_to_octal(nb, base);
	}
}
