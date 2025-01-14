#include <unistd.h>


void	ft_putchar(char c);
void	ft_print_ab(int a, int b);


void	ft_print_comb2(void)
{
	int a , b ;
	
	a = 0;
	while(a <= 98){
		b = a+1;
		while(b <= 99){
			ft_print_ab(a, b);
		b++;
	  	}
	a++;
	}

}


void	ft_print_ab(int a, int b){

	int la, ra, lb, rb;
	
	la = a/10;	lb = b/10;
	ra = a%10;	rb = b%10;

        ft_putchar(la+48);
        ft_putchar(ra+48);
        ft_putchar(' ');
        ft_putchar(lb+48);
	ft_putchar(rb+48);
	if(a != 98)
	{
        	ft_putchar(',');
        	ft_putchar(' ');
	}
	
}
