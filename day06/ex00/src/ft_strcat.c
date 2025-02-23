#include	<stddef.h>

int	ft_strlen(char*);

char	*ft_strcat(char *dest, char *src)
{
	int i , j;
	if(src == NULL)
		return NULL;
	if(dest == NULL)
	{
		i = 0;
		while(src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	else
	{
		i = 0;
		j = ft_strlen(dest);
		while(src[i])
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = '\0';	
	}
	return (dest);
}
