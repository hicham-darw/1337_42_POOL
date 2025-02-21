int     ft_strcmp(char *s1, char *s2)
{
	int res;
	
	res = 0;
	while( *(s1) && *(s2) )
	{
		res += ((int)*(s1));
		res -= ((int)*(s2));
    		s1++;
		s2++;
	}

    	return res;
}
