#define NULL ((void*)0)

char	*ft_strncpy(char *dst, char *src, unsigned int n)
{
	unsigned int i;
	
	if(src == NULL)
		return NULL;
	i  = 0;
	while( i < n && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';

	return (dst);
}
