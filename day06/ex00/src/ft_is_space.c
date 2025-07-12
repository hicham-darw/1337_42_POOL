int	ft_is_space(char c)
{
	if(c == ' ' || c == '\t' || c == '\r' || c == '\v')
		return 0;
	else
		return 1;
}
