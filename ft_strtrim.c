#include "libft.h"

char * ft_strtrim(char const *s)
{
  int index;
  int debut;
  int fin;
  char *chaine;

  fin = 0;
  debut = 0;
  index = 0;
  while (s[index] == ' ' || s[index] == '\n' || s[index] == '\t')
      index++;
  if (s[index] == '\0')
    return ((char *)s);
  debut = index;
  while (s[index] != '\0')
      index++;
  index--;
  while(s[index] == ' '|| s[index] == '\n' || s[index] == '\t')
    index--;
  fin = index;
  chaine = ft_memalloc(fin - debut);
  if(chaine == NULL)
      return (NULL);
  index = 0;
  while(debut <= fin)
    {
      chaine[index] = s[debut]; 
      debut++;
      index++;
    }
  return (chaine);
}
