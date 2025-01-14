#include	<stdlib.h>
#include	<stdio.h>

int	ft_atoi(char*);
char*	ft_strrev(char*);


char*	ft_convert_base(char *nbr, char *base_from, char * base_to){

	int num, count, dupli;
	char *ptr;
	
	num = ft_atoi(nbr);
	dupli = num;
	count = 1;
	if(base_from == "10"){
		if(base_to == "2"){
			while(dupli != 0 || dupli != 1){ // num 15/2 7/2 3/2 1 =  1111
				count+=1;
				dupli/=2;
			}
		ptr = malloc(sizeof(char) * count+1);
			if(ptr == NULL){
				exit(1);
			}else{
				dupli = num;
				int i = 0;
				while(ptr[i]){
					if(dupli != 0 || dupli != 1){
						if(dupli%2 == 0){
							ptr[i] = '0';
						}else{
							ptr[i] = '1';
						}
					dupli/2;
					i++;
					}else{
						if(dupli == 0){
							ptr[i] = '0';
						}else{
							ptr[i] = '1';
						}
					i++;
					}
				}
				ptr[i] = '\0';

			}
			ft_strrev(ptr);
			return (ptr);

		}else if(base_to == "10"){
			return nbr;
		}else if(base_to == "16"){
			return 0;
		}
	}else if(base_from == "2"){
		if(base_to == "2"){
			return nbr;
		}else if(base_to == "10"){
			return 0;
		}else if(base_to == "16"){
			return 0;
		}
	}else if(base_from == "16"){
		if(base_to == "2"){
			return 0;
		}else if(base_to == "10"){
			return 0;
		}else if(base_to == "16"){
			return nbr;
		}

	}else 
		printf("invalid base\n");
		return 0;

}
