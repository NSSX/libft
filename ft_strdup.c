#include "libft.h"

char *ft_strdup(const char *s1)
{
  int index;
  char *dupli;

  index = 0;
  dupli = (char *)malloc(sizeof(char) * ft_strlen(s1));
  if(dupli == NULL)
    {
      return(NULL);
    }
  while(s1[index] != '\0')
    {
      dupli[index] = s1[index];
      index++;
    }
  return (dupli);
}
