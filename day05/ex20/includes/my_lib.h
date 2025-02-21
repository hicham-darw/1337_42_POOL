#ifndef	MY_LIB_H
#define	MY_LIB_H

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_convert_to_binary(int nb, char sign);
void	ft_convert_to_hexadecimal(int nb, char *base);
void	ft_convert_to_octal(int nb, char *base);
void	ft_putnbr_base(int nb, char *base);
int	ft_strcmp(char *s1, char *s2);
int	ft_len_binary(int nb);
char	*ft_fill_ptr_bianry(char *str, int nb);
char	*ft_transfer_to_negative_binary(char *ptr);
int	ft_iterative_power(int nb, int p);
int	ft_put_hexa(char *str, char *base);

#endif
