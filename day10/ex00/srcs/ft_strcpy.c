#include	<stdlib.h>

char*   ft_strcpy(char* dst, char* src){

        int i ;
	
	if(src == NULL)
		return NULL;

	i = 0;
        while(src[i]){
                dst[i] = src[i];
        i+=1;
        }
	dst[i] = '\0';
        return dst;
}

