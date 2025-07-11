#include "../ft_atoi_base.h"

int	ft_str_is_base(char *base)
{
	int	i;
	int	j;

	if (!base)
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if ((base[i] >= 48 && base[i] <= 57) || (base[i] >= 65 && base[i] <= 70))
			i++;
		else
			return (0);
	}
	return (1);
}
