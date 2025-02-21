#include	"ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int(*cmp)(char*, char* ))
{
	if( !begin_list )
		return NULL;
	while( begin_list )
	{
		if((cmp)((char*)begin_list->data, (char*)data_ref) == 0)
			return (begin_list);
		begin_list = begin_list->next;
	}
	return NULL;
}
