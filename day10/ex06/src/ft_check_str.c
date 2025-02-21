#define NULL ((void*)0)

int	ft_check_str(char *str)
{
	int i;
	i = 0;
	while(str[i]){
		if(str[i] == ' ' || str[i] == '+' || str[i] == '-' || (str[i] >= 48 && str[i] <= 57))
			i++;
		else
			return 1;
	}
	return 0;
}
