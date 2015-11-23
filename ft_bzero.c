#include "libft.h"

void ft_bzero (void *s, int n)
{
  int index;

  index = 0;
  while(n > 0)
    {
      ((char *)s)[index] = 0;
      index++;
      n--;
    }
}
