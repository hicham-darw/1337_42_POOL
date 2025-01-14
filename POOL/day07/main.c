#include        <stdio.h>
#include        <stdlib.h>

char*	ft_strdup(char*);
char*	ft_convert_base(char *nbr, char *base_from, char *base_to);

int     main(void)
{
        char *nbr = ft_strdup("15");
	char *base_from = ft_strdup("10");
	char * base_to = ft_strdup("2");
	printf("%s\n", ft_convert_base(nbr, base_from, base_to));

        return 0;
}

