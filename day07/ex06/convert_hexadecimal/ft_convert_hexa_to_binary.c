#include	<stdlib.h>


int	ft_is_alphanumeric_hexa(char *nbr);
int	ft_strlen(char *nbr);
char	*ft_fill_str(char *ptr, char *nbr);
int	ft_iterative_power(int n, int power);
char	*ft_strrev(char *str);
//----------prototype-------------------------

char	*ft_convert_hexa_to_binary(char *nbr)
{
	char *ptr;
	int i, len ;
	if(ft_is_alphanumeric_hexa(nbr) == 1 ){
		return NULL;
	}
	len = ft_strlen(nbr);
	ptr = (char*)malloc(sizeof(char) * (len*4)+2);
	if(ptr == NULL)
		exit(0);
	return ft_fill_str(ptr, nbr);	 

}

/// tcheck if any charcter not hexa in string nbr-----;
int	ft_is_alphanumeric_hexa(char *nbr)
{
	int i = 0;
	if(nbr == NULL)
		return 1;

	while(nbr[i]){
		if(nbr[i] >= 48 && nbr[i] <= 57 || nbr[i] >= 65 && nbr[i] <= 70){
			i+=1;
		}else{
			return 1;
		}
	}
	return 0;
}

////// fill with binary--------------
char	*ft_fill_str(char *ptr, char *nbr)
{
	int i, value, len, count, rvalue;
	len = ft_strlen(nbr);
	i = 0;
	value = 0;
	while(nbr[i]){
		if(nbr[i] <= 57)
			value = value + ft_iterative_power(16, (len-1)-i) * (nbr[i]-48);
		else
			value = value + ft_iterative_power(16, (len-1)-i) * (nbr[i]-55);
	i+=1;
	}
	count = 0;
	while(value >= 2){
		rvalue = value%2;
		ptr[count] = rvalue + 48;
		count++;
	value = value/2;
	}
	if(value == 1)
		ptr[count] = '1';
	else
		ptr[count] = '0';
	count++;
	ptr[count] = '\0';
	return ft_strrev(ptr);	
}
