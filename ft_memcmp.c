#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
  size_t index;
  int resultat;
  unsigned char *src1;
  unsigned char *src2;

  src1 = (unsigned char *)s1;
  src2 = (unsigned char *)s2;
  resultat = 0;
  index = 0;
  while((src1[index] == src2[index]) && (index < n))
    index++;
  resultat = src1[index] - src2[index];
  return (resultat);
}
