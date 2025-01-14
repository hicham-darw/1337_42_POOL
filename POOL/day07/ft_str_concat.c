int	ft_strlen(char *str);

char*	ft_str_concat(char *dst, char *src)
{
	int i = 0;
	if(dst[i] == 0){
		while(src[i]){
			dst[i] = src[i];
		i++;
		}
		dst[i] = '\0';
		return dst;
	}else{
		i = 0;
		while(dst[i]){
		i++;
		}
		if(dst[i] == '\0'){
			dst[i] = '\n';
			i+=1;
		}
		int k = 0;
		while(src[k]){
			dst[i] = src[k];
		i++;
		k++;
		}
		if(src[k] == '\0'){
			dst[i] = src[k];
		}
		return dst;	
	}
}
