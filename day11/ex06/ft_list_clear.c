#include	"ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *list;

	list = NULL;
	while( (*begin_list) != NULL )
	{
		list = (*begin_list)->next;
		free(*begin_list);
		*begin_list = list;
	}
	(*begin_list) = NULL;
}
