#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char a, b, la, ra, lb, rb;
	int space = 32;
	int ver = 44;
	
	a = 0;
	while(a <= 98)
	{
		b = a+1;
		while(b <= 99)
		{
			la = (a/10)+48; ra = (a%10)+48;
			lb = (b/10)+48; rb = (b%10)+48;
			
			write(1, &la, 1);
			write(1, &ra, 1);
			write(1, &space, 1);
			write(1, &lb, 1);
			write(1, &rb, 1);
			if(a != 98){
				write(1, &ver, 1);
				write(1, &space, 1);
			}
		b+=1;
		}
	a+=1;
	}

}

int main(){
	ft_print_comb2();
}

