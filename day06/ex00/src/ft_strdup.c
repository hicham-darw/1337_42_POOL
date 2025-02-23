#include	<stdlib.h>

int	ft_strlen(char *str);

char*	ft_strdup(char* src)
{
	char *ptr ;
	ptr = malloc(sizeof(char) * ft_strlen(src)+1);
	if( !ptr )
		return NULL;
	int i = 0;
	while(src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	
	return ptr;
}
