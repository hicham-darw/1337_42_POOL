#define	NULL ((void*)0)

int	ft_strlen(char*);
char*	ft_strcat(char *dst, char *src)
{	
	int i, k;
	if(dst == NULL){
		i = 0;
		while(src[i]){
			dst[i] = src[i];
		i++;
		}
		dst[i] = '\0';
	}else{
		i = ft_strlen(dst); 
		k = 0;
		while(src[k]){
			dst[i] = src[k];
		i++;
		k++;
		}
		dst[i] = '\0';	
	}
	return dst;
}
