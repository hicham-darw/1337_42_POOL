#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	array = (int *)malloc(sizeof(int) * (max - min) + 1);
	if (min >= max)
		return (NULL);
	array[max-min] = 0;
	i = 0;
	while (min < max)
	{
		*(array + i) = min;
		i += 1;
		min += 1;
	}
	return (array);
}
