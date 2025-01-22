#include	<stdlib.h>

int*	ft_range(int min, int max){

        int *array = malloc(sizeof(int)*(max-min));
	if(min >= max){ 
		return NULL;
	}else{
		int i = 0;
		while(min < max ){
			*(array+i) = min;
		i+=1;
		min+=1;
		}

		return array;
	}
}
