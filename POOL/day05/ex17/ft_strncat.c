#define NULL ((void*)0)

int	ft_strlen(char *str);

char*	ft_strncat(char *dst, char *src, int nb)
{
	int i , k;
	if(dst == NULL){
		i = 0;
		while(i < nb && src[i]){
			dst[i] = src[i];
		i++;
		}
		dst[i] = '\0';
		return dst;
	}else{

		i = ft_strlen(dst);
		k = 0;
		while(k < nb && src[k]){
			dst[i] = src[k];
		k++;
		i++;
		}
		
		dst[i] = '\0';
		return dst;
	}
}
