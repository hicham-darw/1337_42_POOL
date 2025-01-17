#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);

int	main(){
	char str[50];
	char base[50];
	printf("enter number: ");
	scanf("%s", str);
	printf("enter base: ");
	scanf("%s", base);
	printf("%d\n", ft_atoi_base(str, base));
	
}
