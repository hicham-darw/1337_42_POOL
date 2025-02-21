#include	"ft_list.h"


t_list	*ft_list_at(t_list **begin_list, unsigned int nbr)
{
	t_list *list;
	int i ;

	if( (!begin_list) || nbr <= 0)
		return NULL;
	list = NULL;

	i = 1;
	while( (*begin_list) != NULL && i <= nbr)
	{
		list = (*begin_list);
		(*begin_list) = (*begin_list)->next;
		i++;
	}
	return list;
}
