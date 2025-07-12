#include <stdlib.h>

void	*ft_memset(void *str, int c, unsigned int n);
void	ft_putstr(char *str);

void	ft_print_line(int line)
{
	char	hex[17] = "0123456789ABCDEF";
	char	*ptr;
	int	i;

	ptr = (char *)malloc(sizeof(char *) * 9);
	if (!ptr)
		return;
	ptr[8] = '\0';
	ft_memset(ptr, 48, 8);
	i = 6;
	while(line >= 16)
	{
		ptr[i] = hex[line % 16];
		line /= 16;
		i--;
	}
	ptr[i] = hex[line % 16];
	ft_putstr(ptr);
	ft_putstr(": ");
	free(ptr);
	return;
}
