int	ft_strlen(char*);


unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size)
{
	int i ;
	int len_src = ft_strlen(src);
	int total_length = ft_strlen(src);
	if((unsigned)len_src+1 >= size){
		return (unsigned)(total_length);
	}else{
		i = 0;
		while(src[i] && (unsigned)i  < size-1){
			dst[i] = src[i];
		i++;
		}
		dst[i] = '\0';
		return (unsigned)(i);	
	}
}
