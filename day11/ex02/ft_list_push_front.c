#include	"ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *first;
	
	if(!begin_list)
		return;
	first = NULL;
	first = ft_create_elem(data);
	
	first->next = (*begin_list);
	(*begin_list) = first;
}
