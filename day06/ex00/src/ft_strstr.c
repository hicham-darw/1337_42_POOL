#define NULL ((void*)0)

char	*ft_strstr(char *str, char *to_find)
{
	int i, j, sub_s;
	
	if(str == NULL)
		return NULL;
	else if(to_find == NULL)
		return str;
	i = 0;
	while(str[i])
	{
		j = 0;
		if(str[i] == to_find[j])
		{
			sub_s = i;
			while(to_find[j])
			{
				if(to_find[j] == str[sub_s])
					sub_s++;
				else
					break;
				j++;
			}
			if(to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return NULL;
}
