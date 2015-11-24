#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
  int index;

  index = 0;
  while(s[index] != '\0')
    index++;
  while(index > 0)
    {
      if(s[index] == (char)c)
        return ((char *)&s[index]);
      index--;
    }
  if((char)c == '\0')
    {
      return ((char *)&s[index]);
    }
  return (NULL);
}
