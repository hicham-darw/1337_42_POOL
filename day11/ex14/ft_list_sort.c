#include	"ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)(char*,char*))
{
	t_list *ptr, *head;
	void *temp;
	int repeat;
		
	if( !(begin_list) || !(*begin_list))
		return;
	
	temp = NULL;
	ptr = (*begin_list);
	head = (*begin_list);
	repeat = 0;
	while(	ptr->next )
	{
		if((cmp)((char*)ptr->data, (char*)ptr->next->data) > 0)
		{
			temp = ptr->data;
			ptr->data = ptr->next->data;
			ptr->next->data = temp;
			repeat = 1;
		}
		if(repeat == 1)
		{
			ptr = head;
			repeat = 0; 
		}
		else
			ptr = ptr->next;
	}
}
