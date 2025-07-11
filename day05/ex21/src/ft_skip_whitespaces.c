int	ft_skip_whitespaces(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}
