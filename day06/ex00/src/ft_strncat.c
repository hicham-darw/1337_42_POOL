#include	<stddef.h>

int	ft_strlen(char *str);

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i , k;
	if(dest == NULL)
	{
		i = 0;
		while(i < nb && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	else
	{
		i = ft_strlen(dest);
		k = 0;
		while(k < nb && src[k])
		{
			dest[i] = src[k];
			k++;
			i++;
		}
		dest[i] = '\0';
	}
	return dest;
}
