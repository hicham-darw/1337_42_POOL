char	*ft_strrev(char*);

char	*ft_fill_ptr_binary(char *str, int nb)
{
	int i ;

	i = 0;
	while(nb > 1)
	{
		str[i] = ((nb % 2) + 48);
		i++;
		nb/=2;
	}
	if(nb == 1)
		str[i] = '1';
	else
		str[i] = '0';
	i++;
	str[i] = '\0';
	
	return ft_strrev(str);
}
