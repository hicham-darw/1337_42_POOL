#include	"ft_list.h"


void	ft_list_revers(t_list **begin_list)
{
	t_list *prev, *curr, *next;
	
	if(!begin_list)
		return;
	
	prev = NULL;
	curr = NULL;
	next = NULL;
	curr = (*begin_list);
	while( curr )
	{
		//store current  next in pointer;;
		next = curr->next; 
		//store prev of current pointer prev
		curr->next = prev;
		//increment prev to current;
		prev = curr;
		// increment curret to  next
		curr = next;
	}
	
	(*begin_list) = prev;	
}
