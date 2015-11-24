#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
  size_t index;

  unsigned char *m;
  m = (unsigned char *)b;
  index = 0;
   while(index < len)
    {
      m[index] = (unsigned char)c;
      index++;
    }
   return (b);
}
