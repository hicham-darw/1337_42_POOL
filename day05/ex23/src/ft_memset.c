#include <stddef.h>

void	*ft_memset(void *restrict str, int c, size_t n)
{
	size_t	i;
	char	*tmp;

	if (!str)
		return (NULL);
	tmp = (char *)str;
	i = 0;
	while (i < n)
	{
		tmp[i] = (char)c;
		i++;
	}
	return (str);
}
