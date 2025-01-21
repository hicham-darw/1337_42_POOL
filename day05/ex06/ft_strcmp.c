int     ft_strcmp(char *str1, char *str2)
{
	int res, i ;
	
	res = 0;
	i = 0;
	while(    str1[i] || str2[i]     ){
		res = res + (int)str1[i] - (int)str2[i];
	i++;
    	}

    	return res;
}
