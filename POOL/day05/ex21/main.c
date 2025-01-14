#include	<stdio.h>
#include	<unistd.h>

int	ft_atoi_base(char*, char*);

int     main(){

        char str[25];
        char base[17];
        printf("enter the number: ");
        scanf("%s", str);
        printf("enter base do you want: ");
        scanf("%s", base);
	printf( "%d\n", ft_atoi_base(str, base)   );


}
