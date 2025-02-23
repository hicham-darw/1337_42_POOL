#include	<stddef.h>

int	ft_check_whitespaces(char c);

int	ft_count_words(char *str)
{
	int i, count ;
	
	if(str == NULL)
		return -1;
	
	count = 0;
	i = 0;
	while(str[i])
	{
		if(ft_check_whitespaces(str[i]) == 1)
		{
			count+=1;
			while(ft_check_whitespaces(str[i]) == 1 && str[i])
				i++;
		}
		else
			i++;
	}
	return count;
}
