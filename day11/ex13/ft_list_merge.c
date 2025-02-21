#include	"ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *head;

	if( !begin_list1 || !begin_list2)
		return ;
	
	head = (*begin_list1);
	if( !(*begin_list1) )
	{
		(*begin_list1) = begin_list2;
		return;
	}	
	while((*begin_list1)->next)
	{
		(*begin_list1) = (*begin_list1)->next;
	}
	(*begin_list1)->next = begin_list2;
	(*begin_list1) = head;
}
