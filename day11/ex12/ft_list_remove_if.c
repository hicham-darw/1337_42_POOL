#include	"ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(char*, char*))
{
	t_list	*current, *head;

	if( !begin_list )
		return;

	head = NULL;
	current = NULL;
	while(  (cmp)((char*)(*begin_list)->data, (char*)data_ref)   == 0)
		(*begin_list) = (*begin_list)->next;
	
	current = (*begin_list);
	head = current;
	while((*begin_list)->next)
	{
		if( (cmp)((char*)(*begin_list)->next->data, (char*)data_ref) == 0 )
		{
			if((*begin_list)->next->next != NULL)
				current->next = (*begin_list)->next->next;
			else
				current->next = NULL;
		}
		current = current->next;
		(*begin_list) = (*begin_list)->next;
	}
	(*begin_list) = head;
}
