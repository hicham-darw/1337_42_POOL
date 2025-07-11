int	ft_get_index(char c, char *base)
{
	int	i;

	if (!base)
		return (-1);
	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}
