#define NULL ((void*) 0)

int	ft_str_is_uppercase(char *str)
{
	int i ;
	if(str == NULL) 
		return 1 ;
	while(str[i]){
		if(str[i] >= 65 && str[i] <= 90){
			i+=1;
		}else 
			return 0;
	}
	return 1;
}
