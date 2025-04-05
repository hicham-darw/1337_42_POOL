void	ft_putchar(char c);
void	ft_put_hexa(char c);


void	ft_putstr_non_printable(char *str)
{
	int	i;
	
	if(!str)
		return;
	i = 0;
	while(str[i])
	{
		if(str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_put_hexa(str[i]);
		}
		i++;
	}
}

void	ft_put_hexa(char c)
{

	char hexa[17] = "0123456789abcdef\0";
	ft_putchar(hexa[c / 16]);
	ft_putchar(hexa[c % 16]);
}
