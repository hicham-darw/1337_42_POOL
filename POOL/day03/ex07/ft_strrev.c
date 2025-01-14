int	ft_strlen(char *str);
void	ft_swap(char*, char*);


char*	ft_strrev(char *str)
{
	int i, len;
	
	len = ft_strlen(str);
	i = 0;
	
	while(      i < (len/2)      ){
		ft_swap( (str+i) , (str+len-i-1)  );
	i++;
	}
	
	return (str);
}
