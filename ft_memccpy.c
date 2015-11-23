#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
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
      if(s[i] == (unsigned char)c)
       {
	  return ((void *)&d[i]);  
       }
      i++;
    }
  return (NULL);
}
