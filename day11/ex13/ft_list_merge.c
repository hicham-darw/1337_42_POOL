#include	"ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *last;

	if( !begin_list1 || !begin_list2)
		return ;
	last = NULL;

	last = ft_list_last(*begin_list1);
	last->next = begin_list2;

}
