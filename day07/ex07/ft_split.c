#include	<stdlib.h>
#include	<unistd.h>// for perror() func;


char	*ft_strncat(char *dst, char *src, int len);
int	ft_strlen(char *str);
int	ft_check_whitespaces(char c);
int	ft_count_vector(char *str);
char	**ft_fill_vector(char**, char*,char*);
//------------ prototype--------------------

//----- split str to vector like(@str@);
char	**ft_split(char *str, char *charset)
{
	char **vec;
	int count, i, j;
	if(str == NULL )
		return NULL;
	count = ft_count_vector(str);
	vec = (char**)malloc(sizeof(char*) * count+1);	
	count = 0;
	i = 0;
	j = 0;
	while(str[j]){
		if(ft_check_whitespaces(str[j]) == 1){
			while(ft_check_whitespaces(str[j]) == 1 && str[j]){
			j++;
			}
		}else{
			while(ft_check_whitespaces(str[j]) == 0 && str[j]){
				count++;
			j++;
			}
			vec[i] = (char*)malloc(sizeof(char) * count+3);
			i++;
			count = 0;
		}
	}
	vec[i] = NULL;	
	return ft_fill_vector(vec, str, charset);
}

// fill vector--------------
char	**ft_fill_vector(char **vec, char *str, char *charset)
{
	int count_ptr, i, j, count_char, count_str;
	if(vec == NULL || str == NULL || charset == NULL)
		return NULL;
	count_char = 0;
	count_ptr = 0;
	count_str = 0;
	while( str[count_str] ){
		if(ft_check_whitespaces(str[count_str]) == 0){
				if(charset[count_char] != '\0'){
					ft_strncat(vec[count_ptr], charset+count_char, 1);
					count_char++;
				}
				while(ft_check_whitespaces(str[count_str]) == 0 && str[count_str]){
					ft_strncat(vec[count_ptr], str+count_str, 1);
				count_str++;
				}
				if(charset[count_char] != '\0'){
					ft_strncat(vec[count_ptr], charset+count_char, 1);
					count_char++;
				}
				count_ptr+=1;
		}else{
			count_str++;
		}
	}
	vec[count_ptr] = NULL;
	return ( vec );
}

// count spaces tabs newline
int	ft_count_vector(char *str)
{
	int i , count, b;
	if(str == NULL)
		return -1;	
	count = 1;
	i = 0;
	while(str[i]){
		if(ft_check_whitespaces(str[i]) == 1){
			b = i;
			while(str[b] == ' ' || str[b] == '\t' || str[b] == '\n'){
			b++;
			}
			count+=1;
		i = b;
		}else{
			i++;
		}
	}
	return count;
}

//-----check char if whitespace
int	ft_check_whitespaces(char c)
{
	if(c == ' ' || c == '\t' || c == '\n')
		return 1;
	else 
		return 0;
}
