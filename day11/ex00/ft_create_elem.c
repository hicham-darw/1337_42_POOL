#include	"ft_list.h"

t_list	*ft_create_elem(void	*data)
{
	t_list	*list;

	if(!data)
		return NULL;
	list = NULL;

	list = (t_list *)malloc(sizeof(t_list));
	if(!list)
		return NULL;
	
	list->data = data;
	list->next = NULL;

	return list;
}
