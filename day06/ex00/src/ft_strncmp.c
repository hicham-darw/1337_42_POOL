int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i, res;

	res = 0;
	i = 0;
	while( s1[i] &&  (unsigned)i < n ){
		res = res + (int)s1[i] - (int)s2[i];
	i++;
	}

	return (res);
}
