#include "libft.h"

char    *ft_strnstr(const char *s1, const char *s2, size_t n)
{
  int index;
  int index2;
  int indextemp;

  indextemp = 0;
  index2 = 0;
  index = 0;
  if(s2[0] == '\0')
    return ((void *)&s1[0]);
  while(s1[index] != '\0' &&  index < n)
    {
      if(s1[index] == s2[0])
        {
          indextemp = index;
          while((s1[indextemp] == s2[index2]) && s2[index2] != '\0' && s1[indextemp] != '\0' && indextemp < n)
            {
              index2++;
              indextemp++;
            }
          if(s2[index2] == '\0')
            {
              return ((void *)&s1[index]);
            }
          else
	    {
	      index2 = 0;
	    }
	}
      index++;
    }
  return(NULL);
}
