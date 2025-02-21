#include	"ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *temp, *new;

	if (!begin_list || !data)
		return;

	new = ft_create_elem(data);
	if (!new)
		return;

	if (!(*begin_list))  
    	{
		*begin_list = new;
		return;
    	}
	
	temp = *begin_list;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;  
}
