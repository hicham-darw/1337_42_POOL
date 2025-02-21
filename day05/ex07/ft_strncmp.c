int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int res;
	unsigned int i;
	
	res = 0;
	i = 0;
	while((s1[i] || s2[i]) &&  i < n)
	{
		res = res + (int)s1[i] - (int)s2[i];
		i++;
	}

	return (res);
}
