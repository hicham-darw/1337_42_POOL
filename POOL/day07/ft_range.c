#include	<stdio.h>
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

int	main(void)
{
	int min = 3;
	int *table = ft_range(min, 20);
	
	int i = 0;
	while( i < 30 && table[i]) {
		if(table[i+1] == 0){
			printf(" %d\n", table[i]);
		}else{
			printf(" %d -", *(table+i));
		}
	i++;
	}
	free (table);

	return 0;
}
