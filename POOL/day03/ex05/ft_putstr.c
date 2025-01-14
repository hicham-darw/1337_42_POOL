#include	<unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char* str){

	while(*str != '\0'){
		ft_putchar(*str);		
	str++;
	}
}

int main(){
	ft_putstr("hicham\0");
}
