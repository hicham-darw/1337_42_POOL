#include	"ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *list_params;
	int i ;

	list_params = NULL;
	list_params = ft_create_elem((void*)av[1]);
	
	i = 1;
	while(i < ac)
	{
		if(i == 1)
			list_params = ft_create_elem((void*)av[i]);
		else
			ft_list_push_front(&list_params, (void*)av[i]);
		i++;
	}

	return list_params;
}
