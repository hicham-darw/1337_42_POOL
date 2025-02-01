#define NULL ((void*)0)

int	ft_str_is_numeric(char *str)
{
	if(str == NULL) 
		return 1;
	int i = 0;
	while(str[i]){
		if(str[i] >= 48 && str[i] <= 57) 
			i++;
		else 
			return 0;
	}
	return 1;
}
