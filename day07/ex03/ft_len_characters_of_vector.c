int	ft_strlen(char *str);

int	ft_len_characters_of_vector(int argc, char **argv)
{
	int len, i;
	
	len = 0;
	i = 0;
	while(i < argc && argv[i])
	{
		len = len + ft_strlen(argv[i]);
		i++;
	}
	return len;
}
