#include "libft.h"

t_list *ft_lstnew(void const *content, size_t content_size)
{
  t_list *elem;

  elem = (t_list*)malloc(sizeof(*elem));
  if (elem)
    {
      if (!content)
	{
	  elem->content = NULL;
	  elem->content_size = 0;
	}
      else
	{
	  elem->content = malloc(content_size);
	  elem->content = ft_memcpy(elem->content, content, content_size);
	  elem->content_size = content_size;
	}
      elem->next = NULL;
    }
  return (elem);
}
