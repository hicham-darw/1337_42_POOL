#include	<stdlib.h>
#include	<stdio.h>

char    *ft_convert_base(char*, char*, char*);
//////////////////////////////////////////////

int     main(void){
        char nbr[100], base_from[17], base_to[17];
        printf("enter string of nbr: ");
        scanf("%s", nbr);
        printf("enter your base from nbr: ");
        scanf("%s", base_from);
        printf("enter the base you want to convert: ");
        scanf("%s", base_to);
        printf("%s\n",ft_convert_base(nbr, base_from, base_to));

	return 0;
}

