#include	<stdio.h>
#include	<stdlib.h>



int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{


	int *array ;
	int result; 
	result = ft_ultimate_range(&array, 20, 33);
	if(array == NULL){
		printf("*******************\n* error allocated *\n*******************\n");
	}else{
		if(result == 0){
			printf("memory allocation failed");
			return 1;
		}else{
			int i = 0;
			while(array[i]){
				printf(" %d -", array[i]);
			i++;
			}
			printf("\n return ====> %d\n",result);
		
		}
		

	}



	return 0;
}

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
