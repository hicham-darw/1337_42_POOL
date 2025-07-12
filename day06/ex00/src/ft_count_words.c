int	ft_is_space(char c);

int	ft_count_words(char *str)
{
	int i, count ;
	
	if (!str)
		return -1;
	
	count = 0;
	i = 0;
	while(str[i])
	{
		if(ft_is_space(str[i]) == 1)
		{
			count+=1;
			while(ft_is_space(str[i]) == 1 && str[i])
				i++;
		}
		else
			i++;
	}
	return count;
}
