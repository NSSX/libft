#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
  size_t i;
  unsigned char *s;
  unsigned char *d;
  s = (unsigned char *)src;
  d = (unsigned char *)dst;
  i = 0;
  while( i < n)
    {
      d[i] = s[i];
      i++;
    }
  return (dst);
}
