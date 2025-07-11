#ifndef FT_ATOI_BASE_H
#define FT_ATOI_BASE_H

int	ft_get_index(char c, char *base);
int	ft_skip_whitespaces(char *str);
int	ft_strlen(char *str);
int	ft_skip_sign(char c, int *sign);
int	ft_str_is_base(char *base);
int	ft_get_int(char *str, char *base, int sign);
int	ft_atoi_base(char *str, char *base);

#endif
