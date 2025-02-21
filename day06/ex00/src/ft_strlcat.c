int	ft_strlen(char*);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int len_dest, total_len, i;
	
	len_dest = ft_strlen(dest);
	total_len = (unsigned)ft_strlen(dest) + ft_strlen(src);

	if((len_dest + 1) >= size)
		return (total_len);
	else
	{
		i = 0;
		while(src[i] && (len_dest + i) < (size - 1))
		{
			dest[i + len_dest] = src[i];
			i++;
		}
		dest[i + len_dest] = '\0';
		return i + len_dest;
	}
}
