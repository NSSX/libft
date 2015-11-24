#include "libft.h"

char    *ft_strncat(char *s1, const char *s2, size_t n)
{
  int index;
  int index2;
  size_t i;

  i = 0;
  index2 = 0;
  index = 0;
  while(s1[index] != '\0')
    {
      index++;
    }
  while(s2[index2] != '\0' && index2 < n)
    {
      s1[index] = s2[index2];
      index++;
      index2++;
    }
  s1[index] = '\0';
  return (s1);
}
