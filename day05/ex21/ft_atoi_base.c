#include "ft_atoi_base.h"

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	

	if (!str || !base || ft_strlen(base) <= 1)
		return (0);
	if (!ft_str_is_base(base))
		return (0);
	i = 0;
	i = ft_skip_whitespaces(str);
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		while (str[i] == '+' || str[i] == '-')
			i++;
		i--;
	}
	i += ft_skip_sign(str[i], &sign);
	return (ft_get_int((str + i), base, sign));
}
