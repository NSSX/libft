#include "libft.h"

void  ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
  t_list *list;

  list = *lst;
  while(list)
    {
      list = lst->next;
      f(lst);
      lst = list;
    }

}
