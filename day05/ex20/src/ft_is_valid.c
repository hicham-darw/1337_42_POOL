#include "../includes/my_lib.h"

int	ft_is_valid(char *base)
{
	int	i;
	int	j;

	if (!base || ft_strlen(base) <= 1 || ft_strlen(base) > 16)
		return 0;
	i = 0;
	while(base[i])
	{
		j = i + 1;
		while(base[j])
		{
			if(base[j] == base[i])
				return  0;
			j++;
		}
		if(!ft_is_alpha(base[i]) && !ft_is_numeric(base[i]))
			return 0;
		i++;
	}
	return 1;
}
