char	*ft_strrev(char *str);
void	ft_putstr(char *str);

char	*ft_transfer_to_negative_binary(char *ptr)
{
	int i ;

	i = 0;
	while(ptr[i])
	{
		if(ptr[i] == '0')
			ptr[i] = '1';
		else
			ptr[i] = '0';
		i++;
	}
	ptr[i] = '\0';

	ft_strrev(ptr);
	i = 0;
	while(ptr[i])
	{
		if(ptr[i] == '1')
		{
			ptr[i] = '0';
			i++;
		}else
		{
			ptr[i] = '1';
			break;
		}
	}
	
	return ft_strrev(ptr);
}
