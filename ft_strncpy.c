#include "libft.h"

char    *ft_strncpy(char *dst, const char *src, size_t n)
{
  int index;

  index = 0;
  while(src[index] != '\0' && index < n)
    {
      dst[index] = src[index];
      index++;
    }
  while(index < n)
    {
      dst[index] = '\0';
      index++;
    }
  return (dst);
}
