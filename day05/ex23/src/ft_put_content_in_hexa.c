#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

void	ft_put_content_in_hexa(char c)
{
	char	hex[17];

	ft_strcpy(hex, "0123456789ABCDEF");
	if( c >= 16)
		ft_put_content_in_hexa(c / 16);
	write(1, &hex[c % 16], 1);
}
