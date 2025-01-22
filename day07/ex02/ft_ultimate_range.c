#include	<stdlib.h>


int	ft_ultimate_range(int **range, int min, int max)
{
	int *ptr;
	if(min >= max){
		*(range) = NULL;
		return 0;
	}else{
		ptr=(int*)malloc( sizeof(int) * (max-min) );
		int i = 0;
		while(min < max){
			ptr[i] = min;
		min+=1;
		i++;
		}

		*(range) = ptr;
		return i;
	}
}
