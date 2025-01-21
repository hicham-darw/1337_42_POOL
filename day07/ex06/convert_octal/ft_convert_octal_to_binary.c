#include	<stdlib.h>

int	ft_is_alphanumeric_octal(char *nbr);
int	ft_strlen(char *nbr);
char	*ft_strrev(char *str);
int	ft_get_decimal(char *nbr);
int	ft_iterative_power(int n, int power);
char	*ft_get_binary_from_decimal(char *ptr, int n);
//-----------prototype---------------------


//////////////////////////////////////////
char	*ft_convert_octal_to_binary(char *nbr)
{
	char *ptr;
	int len , decimal;
	if(ft_is_alphanumeric_octal(nbr) == 1 || nbr == NULL)
		return NULL;
	len = ft_strlen(nbr);
	decimal = ft_get_decimal(nbr);
	ptr = (char*)malloc(sizeof(char) * (len*3)+2);
	return ft_get_binary_from_decimal(ptr, decimal);
}


// check if any character not in base octal----
int	ft_is_alphanumeric_octal(char *nbr)
{
	int i ;
	if(nbr == NULL)
		return 1;
	while(nbr[i]){
		if(nbr[i] >= 48 && nbr[i] <= 55)
			i++;
		else
			return 1;
	}
	return 0;
}

// get decimal from string nbr;
int	ft_get_decimal(char *nbr)
{
	int i , res, len;
	if(nbr == NULL)
		return -1;
	len = ft_strlen(nbr);
	res = 0;
	i = 0;
	while(nbr[i]){
		res = res + ft_iterative_power(8, (len-1)-i) * (nbr[i] - 48);
	i++;
	}
	return res;
}

// get binary from int decimal---------
/*char	*ft_get_binary_from_decimal(char *ptr, int n)
{
	int rn , count;
	if(ptr == NULL || n < 0)
		return NULL;
	count = 0;
	while(n >= 2){
		rn = n%2;
		ptr[count] = rn + 48;
		count++;
	n/=2;
	}
	ptr[count] = n + 48;
	count++;
	ptr[count] = '\0';
	return ft_strrev(ptr);
}*/





