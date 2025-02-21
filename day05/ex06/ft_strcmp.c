#define NULL ((void*)0)

int     ft_strcmp(char *s1, char *s2)
{
	int res, i ;
	
	if(s1 == NULL || s2 == NULL)
		return -1;
	res = 0;
	i = 0;
	while(s1[i] || s2[i])
	{
		res = res + (int)s1[i] - (int)s2[i];
		i++;
    	}

    	return res;
}
