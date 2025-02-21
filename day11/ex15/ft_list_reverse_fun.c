#include	"ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list *head;
	void *data;
	
	head = begin_list;
	data = NULL;
	while(begin_list)



}

int     main()
{
        t_list *list;

        list = ft_create_elem((void*)strdup("zzzz"));
        ft_list_push_back(&list, (void*)strdup("nnnn"));
        ft_list_push_back(&list, (void*)strdup("bbbb"));
        ft_list_push_back(&list, (char*)strdup("dddd"));
        ft_list_push_back(&list, (char*)strdup("BBBB"));
        ft_list_push_back(&list, (char*)strdup("!!!!"));
        ft_list_push_back(&list, (char*)strdup("mmmm"));
        ft_list_push_back(&list, (char*)strdup("aaaa"));
        ft_list_push_back(&list, (char*)strdup("kkkk"));
        ft_list_push_back(&list, (char*)strdup("llll"));
        ft_list_push_back(&list, (char*)strdup("yyyy"));
        ft_list_sort(&list, &ft_strcmp);
        printf("after:\n");
        while( list )
        {
                printf("==> %s\n", (char*)list->data);
                list = list->next;
        }
}

