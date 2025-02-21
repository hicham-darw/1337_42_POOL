#include	"ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)(char*, char*))
{
	t_list *ptr, *head;

	if(!begin_list)
		return;

	ptr = ft_create_elem(data);
	if(!(*begin_list))
	{
		(*begin_list) = ptr;
		return;
	}
	
	ft_list_merge(begin_list, ptr);
	ft_list_sort(begin_list, cmp);
}
