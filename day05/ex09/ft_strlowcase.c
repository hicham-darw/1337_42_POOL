char*	ft_strlowcase(char* str)
{
	int i = 0;
	while(str[i]){
		if(str[i] >= 65 && str[i] <= 90){
			str[i] = (int)str[i] + 32;
		}
	i++;
	}

	return str;
}
