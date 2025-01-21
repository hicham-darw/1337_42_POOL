char*	ft_strncpy(char *dst, char *src, unsigned int n)
{
	int i = 0;
	while( i < n && src[i]){
		dst[i] = src[i];
	i+=1;
	}

	while(i < n){
		dst[i] = '\0';
	i+=1;
	}
	return (dst);
}


