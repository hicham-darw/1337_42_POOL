#include	<stdlib.h>

int	ft_len_characters_of_vector(int argc, char **argv);
int	ft_strlen(char *str);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strcat(char *dst, char *src);

char	*ft_concat_params(int argc, char **argv)
{
	char *ptr;
	int len, i;
	
	if( !argv )
		return NULL;

	len = ft_len_characters_of_vector(argc, argv) + argc + 1;
	ptr = (char*)malloc(sizeof(char) * len);
	if( !ptr )
		return NULL;
	while(i < argc && argv[i])
	{
		if(i == 0)
			ft_strcpy(ptr, argv[i]);
		else
			ft_strcat(ptr, argv[i]);	
		ft_strcat(ptr, "\n");
		i++;
	}
	ptr[ft_strlen(ptr)] = '\0'; 
	return ptr;
}
