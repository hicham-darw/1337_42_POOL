#include	<unistd.h>
#include	<stdlib.h>

void	ft_put_vector(char **vec);
char	**ft_split(char *str, char *charset);
int	ft_strlen(char *str);

int	main(){

ft_put_vector(ft_split("hello motherfuckers dou you know who am I??\0","----------------\0"));

}


void	ft_put_vector(char **vec)
{
	int i = 0;
	while(vec[i]){
		write(1, vec[i], ft_strlen(vec[i]) );
		write(1, "\n", 1);
	i++;
	}
}
