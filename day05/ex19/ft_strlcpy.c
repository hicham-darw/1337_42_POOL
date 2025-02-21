int	ft_strlen(char*);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i , len_src;

	len_src = ft_strlen(src);
	if((len_src + 1) >= size)
		return (len_src);
	i = 0;
	while(src[i] && i  < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
		
	return i;	
}
