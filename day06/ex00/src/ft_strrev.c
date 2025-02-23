#include	<stddef.h>

int	ft_strlen(char *);
void	ft_swap(char *, char *);

char	*ft_strrev(char *str)
{
	int i, len ;
	
	if(str == NULL)
		return NULL ;
	
	len = ft_strlen(str) ;
	i = 0 ;
	while(i < (len / 2) )
	{
		ft_swap(&str[i], &str[(len - 1) - i]);
		i++ ;
	}
	
	return (str);
}
