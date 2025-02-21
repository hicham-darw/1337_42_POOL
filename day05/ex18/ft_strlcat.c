int	ft_strlen(char*);
void	ft_putnbr(int);
void	ft_putstr(char*);
void	ft_putchar(char);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int len_dest, total_len, i;
	
	len_dest = ft_strlen(dest);
	total_len = (unsigned)ft_strlen(dest) + ft_strlen(src);

	if((len_dest + 1) >= size)
		return (total_len);
	else
	{
		i = 0;
		while(src[i] && (len_dest + i) < (size - 1))
		{
			dest[i + len_dest] = src[i];
			i++;
		}
		dest[i + len_dest] = '\0';
		return i + len_dest;
	}
}

int	main()
{
	char src[20] = "hicham\0";
	char dest[25] = "going to school \0";
	int len = ft_strlcat(dest, src, 25);
	ft_putstr(dest);
	ft_putstr("\n>>>>>>return  = \0");
	ft_putnbr(len);

}
