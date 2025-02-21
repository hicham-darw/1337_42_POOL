#define MAX 2147483647
#define MIN -2147483648

int	ft_check_overflow(unsigned int res, char c, int sign)
{
	if((res * 10) + (c - 48) >= MAX)
		if((res * 10) + (c - 48) == MAX)
		{
			return MAX;
		}
		else 
		{
			if(sign == 1)
				return MAX;
			else 
				return MIN;
		}			
	else
		return 0;
}
