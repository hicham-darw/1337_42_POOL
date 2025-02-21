#include	<unistd.h>
#include	<stdlib.h>
#include	<stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int	ft_strlen(char*);
int	ft_len_binary(int nb);
char	*ft_fill_ptr_binary(char *str, int nb);
char	*ft_transfer_to_negative_binary(char *ptr);

void	ft_convert_to_binary(int nb, char sign)
{
	int s_ptr, i;
	char *ptr;

	s_ptr = ft_len_binary(nb) + 1;
	if(s_ptr <= 0)
		write(2, "ERROR: SIZE ALLOCATION\n", 23);

	ptr = (char*)malloc(sizeof(char) * s_ptr);
	if(!ptr)
		write(2, "ERROR: allocation\n", 18);
	ft_fill_ptr_binary(ptr, nb);
	if(sign == '+')
	{
		ft_putstr(ptr);
	}
	else
	{
		ft_transfer_to_negative_binary(ptr);
		i = 0;
		while(i < (32 - ft_strlen(ptr)))
		{
			ft_putchar('1');
			i++;
		}
		ft_putstr(ptr);
	}
	free(ptr);
}
