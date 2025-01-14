#include	<stdlib.h>


char*	ft_str_concat(char* dst, char* src);
int	ft_strlen(char *str);

char*	ft_concat_params(int argc, char **argv)
{
	char *ptr_s;
	int i = 0;
	int size = 0;

	while(i < argc){
		size+=ft_strlen(argv[i])+1;
	i++;
	}
	ptr_s = malloc(sizeof(char) * size);
	
	i = 0;
	while(i < argc){
		ptr_s = ft_str_concat(ptr_s, argv[i]);

	i++;
	}
	ptr_s[size]= '\0';
	
	return ptr_s;	
}

