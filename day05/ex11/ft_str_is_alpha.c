#define NULL ((void*)0)

int	ft_str_is_alpha(char *str)
{	
	if(str == NULL) 
		return 1;
	int i = 0;
	while(str[i]){
		if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)){
			i++;
		}else{
			return 0;
		}
	}
	return 1;
}
