#include "libft.h"

char    *ft_strcat(char *s1, const char *s2)
{
  int index;
  int index2;

  index2 = 0;
  index = 0;
  while(s1[index] != '\0')
    {
      index++;
    }
  while(s2[index2] != '\0')
    {
      s1[index] = s2[index2];
      index++;
      index2++;
    }
  s1[index] = '\0';
  return (s1);
}
