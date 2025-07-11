#include "../ft_atoi_base.h"

int	ft_get_int(char *str, char *base, int sign)
{
	int	res;
	int	index;

	if (!str || !base)
		return (0);
	res = 0;
	while (*str)
	{
		index = ft_get_index(*str, base);
		if (index < 0)
			return (0);
		if ((res > ((2147483647 - index)) / ft_strlen(base)) && sign == 1)
			return (0);
		else if ((res > ((2147483648) - index) / ft_strlen(base)) && sign == -1)
			return (0);
		res = (res * ft_strlen(base)) + index;
		str++;
	}
	return (res * sign);
}
