#define NULL ((void*) 0)

int	ft_str_is_lowercase(char *str)
{
	if(str == NULL) 
		return 1;
	int i = 0;
	while(str[i]){
		if(str[i] >= 97 && str[i] <= 122){
			i+=1;
		}else return 0;
	}
	
	return 1;
}
