#include	"ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list *right, *left;
	void *temp;
	int first, last;

	right = NULL;
	left = NULL;

	first = 1;
	last = ft_list_size(begin_list);
	while(first < last)
	{
		right = ft_list_at(begin_list, (unsigned)first);
		left = ft_list_at(begin_list, (unsigned)(last-1));
		
		temp = right->data;
		right->data = left->data;
		left->data = temp;
		
		first++;
		last--;
	}
}

