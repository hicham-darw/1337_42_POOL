#ifndef	FT_LIST_H
#define	FT_LIST_H

#include	<stddef.h>

typedef struct		s_list
{
	struct s_list	*next;
	void		*data;
}	t_list;

int	ft_list_size(t_list *begin_list);
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);

#endif
