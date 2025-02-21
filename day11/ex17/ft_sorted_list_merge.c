#include	"ft_list.h"

void	ft_sorted_list_merge(t_list	**begin_list1, t_list	*begin_list2, 											   int(*cmp)(char*, char*))
{
	if(!(begin_list1) || !(begin_list2))
		return;

	ft_list_merge(begin_list1, begin_list2);
	ft_list_sort(begin_list1, cmp);
}
