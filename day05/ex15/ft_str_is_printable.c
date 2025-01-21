#define	NULL ((void*) 0)

int	ft_str_is_printable(char *str)
{
	int i ;
	if(str == NULL) 
		return 1;
	i = 0;
	while(str[i]){
		if(str[i] < 32 || str[i] > 126)
			return 0;
		else 
			i+=1;
	}
	return 1;
}
