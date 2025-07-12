#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_print_line(int line);
char	*ft_strndup(char *str, unsigned int n);
void	ft_put_content_in_hexa(int c);
void	*ft_memset(void *ptr, int c, unsigned int n);
void	ft_putstr(char *str);
int	ft_strlen(char *);


void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*ptr;
	char	*line;
	int	i;
	int	j;
	int	counter;
	int	limit;

	if(!addr)
		return NULL;
	ptr = (char *)addr;
	i = 0;
	j = 0;
	while(ptr[i])
	{
		ft_print_line(j++);
		line = ft_strndup((ptr + i), 16);
		limit = 0;
		counter = 0;
		while(counter < 16 && ptr[i])
		{
			ft_put_content_in_hexa(ptr[i]);
			limit += 2;
			if((i % 2) == 1)
			{
				write(1, " ", 1);
				limit += 1;
			}
			counter++;
			i++;
		}
		while(limit < 40)
		{
			write(1, " ", 1);
			limit++;
		}
		ft_putstr(line);
		free(line);
		write(1, "\n", 1);
	}
	return addr;
}
