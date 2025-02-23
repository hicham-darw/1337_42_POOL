#include	<stddef.h>

int	ft_str_is_alpha(char *str)
{	
	if(str == NULL) 
		return 1;
	
	while(*str)
	{
		if(  (*(str) > 90 && *(str) < 97) || (*(str) < 65) || (*(str) > 122)  )
			return 0;
		str++;
	}
	return 1;
}
