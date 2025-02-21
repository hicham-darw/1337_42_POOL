#include	"ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)(char*, char*))
{
	if( !begin_list )
		return;
	while( begin_list )
	{
		if((cmp)((char*)begin_list->data, (char*)data_ref) == 0)
		{
			(f)(begin_list->data);
			return;
		}
		begin_list = begin_list->next;
	}
}
