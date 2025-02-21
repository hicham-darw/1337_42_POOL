#include	<unistd.h>
#include	<stdlib.h>

char	*ft_strrev(char *str);
int	ft_iterative_power(int nb, int p);
void	ft_putchar(char c);

void	ft_put_hexa(char *str, char *base)
{
	int i, j, b, res;
	if(str == NULL || base == NULL)
	{
		write(2, "ERROR: \n", 8);
		exit(-1);
	}

	ft_strrev(str);

	res = 0;
	i = 0;
	while(str[i])
	{
		res = 0;
		b = 0;
		j = i+4;
		while(i < j && str[i])
		{
			if(str[i] == '1')
			{
				res = res + ft_iterative_power(2 , b);		
			}
			b++;
			i++;
		}
		ft_putchar(*(base+res));
	}
}
