#ifndef	FT_LIST_H
#define	FT_LIST_H

#include	<stddef.h>

typedef struct		s_list
{
	struct s_list	*next;
	void		*data;
}	t_list;

int	ft_strcmp(char *s1, char *s2);
t_list	*ft_create_elem(void *data);
void	ft_list_merge(t_list **begin_list1, t_list *begin_list2);
void	ft_list_sort(t_list **begin_list, int (*cmp)(char*, char*));

#endif
