int     ft_strcmp(char *s1, char *s2)
{
	int res, i;
		
	i = 0;
	res = 0;
	while( s1[i] || s2[i] )
	{
		res = res + (int)s1[i] - (int)s2[i];
		i++;
    	}

    	return res;
}
