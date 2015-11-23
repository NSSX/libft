#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
  int index;

  unsigned char *m;
  m = (unsigned char *)b;
  index = 0;
   while(index < len)
    {
      m[index] = (unsigned char)c;
      index++;
    }
   return ((void *)m);
}
