int	ft_strlen(char*);

unsigned int	ft_strlcat(char *dst, char *src, unsigned int size)
{
	int len_dst = ft_strlen(dst);
	int total_length = ft_strlen(dst) + ft_strlen(src);
	unsigned int i ;

	if((unsigned)len_dst+1 >= size){
		return (unsigned)(total_length);
	}else{
		i = 0;
		while(src[i] && ((unsigned)len_dst+i) < size-1){
			dst[i+len_dst] = src[i];
		i++;
		}
		dst[i+len_dst] = '\0';
		return (unsigned)i+len_dst;
	}
}
