#include	"ft_list.h"
#include	<stdio.h>

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *head, *new;

	if (!begin_list || !data)
		return;

	new = ft_create_elem(data);
	if (!new)
		return;

	if (!(*begin_list))  
    	{
		(*begin_list) = new;
		return;
    	}
	
	head = (*begin_list);
	while ((*begin_list)->next != NULL)
	{
		(*begin_list) = (*begin_list)->next;
	}
	(*begin_list)->next = new;
	(*begin_list) = head;
}
