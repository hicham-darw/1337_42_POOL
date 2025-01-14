#include	<stdlib.h>

char*	ft_strstr(char *str, char *to_find){

	int i;
	if(to_find[0] == 0)
		return str;
	i = 0;
	while(str[i]){
		int j = 0;
		if(str[i] != to_find[j]){
			i+=1;
		}else{
			int b = i;
			while(to_find[j]){
				if(to_find[j] == str[b]){
					j++;
					b++;
				}else{
					break;
				}
				if(to_find[j] == '\0'){
					return str+i;
				}
			}
			i+=1;
		}
	}
	return NULL;
}
