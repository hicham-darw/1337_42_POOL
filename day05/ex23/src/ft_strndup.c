#include <stdlib.h>

int	ft_strlen(char *str);

char	*ft_strndup(char *str, int len)
{
	char	*ptr;
	int	i;

	if(!str)
		return NULL;
	ptr = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if(!ptr)
		return NULL;
	i = 0;
	while(i < len && str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	return ptr;
}
