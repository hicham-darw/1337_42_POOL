#include <unistd.h>


void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int a, b, c ;
	
	a = 48;
	while(a <= 55){
		b = a + 1;
		while(b <= 56){
			c = b + 1;
			while(c <= 57){
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if(a != 55){
					ft_putchar(',');
					ft_putchar(' ');
				}
			c++;
			}
		b++;  
		}
	a++;
	}
	ft_putchar('\n');
}

