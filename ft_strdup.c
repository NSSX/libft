#include "libft.h"

char *ft_strdup(const char *s)
{
  int index;
  char *dupli;

  index = 0;
  dupli = malloc(sizeof(char) * sizeof(s));
  if(dupli == NULL)
    {
      return(NULL);
    }
  while(s[index] != '\0')
    {
      dupli[index] = s[index];
      index++;
    }
  return (dupli);
}
