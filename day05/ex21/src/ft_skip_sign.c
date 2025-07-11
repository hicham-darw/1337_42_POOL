int	ft_skip_sign(char c, int *sign)
{
	if (c == '-' || c == '+')
	{
		if (c == '-')
		{
			*(sign) *= -1;
			return (1);
		}
		return (1);
	}
	return (0);
}
