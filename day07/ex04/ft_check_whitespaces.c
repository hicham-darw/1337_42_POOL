int	ft_check_whitespaces(char c)
{
	if( c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\v')
		return 0;
	else
		return 1;
}
