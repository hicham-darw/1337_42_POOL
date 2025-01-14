#include <stdio.h>


void	ft_putnbr_base(int, char*);

int main(){
	int nb;
	char base[20];
	printf("enter the number: ");
	scanf("%d", &nb);
	printf("enter any base do you want: ");
	scanf("%s", base);
	ft_putnbr_base(nb, base);
	printf("\n");	
	return 0;
}
