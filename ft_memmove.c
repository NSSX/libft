#include "libft.h"
#include <stdio.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
  unsigned char *d;
  unsigned char *s;
  size_t i;

  i = 0;
  d = (unsigned char *)dst;
  s = (unsigned char *)src;
  if(s <= d)
    {
      s += len - 1;
      d += len - 1;
      while(i < len)
	{
	  *d-- = *s--;
	  i++;
	}

    }
  else
    ft_memcpy(dst,src,len);
  return (dst);
}
