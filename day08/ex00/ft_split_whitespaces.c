#include	<stdlib.h>

char	*ft_strncpy(char *dst, char *src, int len);
int	ft_check_whitespaces(char);
int	ft_strlen(char *str);
int	ft_count_vector(char *str);
//----------prototype-----------------------

char**	ft_split_whitespaces(char *str)
{
	int i , j, len_v, count_s, start_s, ptr_count;
	char **vec;
	len_v = ft_count_vector(str);
	vec = (char**)malloc(sizeof(char*) * len_v+1);	
	ptr_count = 0;
	i = 0;
	while(str[i]){
		if(ft_check_whitespaces(str[i]) == 0){
			count_s = 0;
			start_s = i;
			while(ft_check_whitespaces(str[i]) == 0 && str[i]){
				count_s++;
				i++;
			}
			vec[ptr_count] = (char*)malloc(sizeof(char) * count_s+1);
			ft_strncpy(vec[ptr_count], str+start_s, count_s);
			ptr_count++;
		}else{
			i++;
		}
	}
	vec[ptr_count] = NULL;
	return (vec);
}

//------- length of victor--------------
int	ft_count_vector(char *str)
{
	int i, count ;
	if(str == NULL)
		return -1;
	count = 0;
	i = 0;
	while(str[i]){
		if(ft_check_whitespaces(str[i]) == 0){
			count+=1;
			while(ft_check_whitespaces(str[i]) == 0 && str[i])
				i++;
		}else{
			i++;
		}
	}
	return count;
}

//------ check whitespaces-------------
int	ft_check_whitespaces(char c){
	
	if(c == ' ' || c == '\t' || c == '\n'){
		return 1;
	}else
		return 0;

}
