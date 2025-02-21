#include	<unistd.h>

void	ft_put_str(int, int, int);

void	ft_print_comb(void)
{
	int a, b, c;
	
	a = 48;
	while(a <= 55)
	{
		b = a+1;
		while(b <= 56)
		{
			c = b+1;
			while(c <= 57)
			{	
				ft_put_str(a,b,c);
				c+=1;
			}
			b+=1;
		}
		a+=1;
	}


}


//------------ put string -------------
void	ft_put_str(int a, int b, int c)
{
	if(a != 55)
	{
		write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
                write(1, " ", 1);
                write(1, ",", 1);
	}else
	{
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
	}
}
