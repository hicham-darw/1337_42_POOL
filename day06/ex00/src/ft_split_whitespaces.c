#include	<stdlib.h>

char	*ft_strncpy(char *dst, char *src, unsigned int len);
int	ft_check_whitespaces(char c);
int	ft_strlen(char *str);
int	ft_count_words(char *str);
//----------prototype-----------------------

char	**ft_split_whitespaces(char *str)
{
	int i, len_v, count_s, start_s, ptr_count;
	char **vec;
	
	len_v = ft_count_words(str);
	vec = (char**)malloc(sizeof(char*) * len_v+1);
	if( !vec )
		return NULL;
	
	ptr_count = 0;
	i = 0;
	while( str[i] )
	{
		if(ft_check_whitespaces(str[i]) == 1)
		{
			count_s = 0;
			start_s = i;
			while(ft_check_whitespaces(str[i]) == 1 && str[i])
			{
				count_s++;
				i++;
			}
			vec[ptr_count] = (char*)malloc(sizeof(char) * count_s+1);
			if( !vec[ptr_count] )
				return NULL;
			ft_strncpy(vec[ptr_count], str+start_s, (unsigned)count_s);
			ptr_count++;
		}
		else
			i++;
	}
	vec[ptr_count] = NULL;
	return (vec);
}

