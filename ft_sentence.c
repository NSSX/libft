#include "libft.h"

char *ft_sentence(char *chaine)
{
  char *new_chaine;
  int i;

  i = 0;
  if(!chaine)
    return (NULL);
  new_chaine = (char *)malloc(sizeof(char) * ft_strlen(chaine) + 1);
  if(chaine == '\0' || !new_chaine)
    return (NULL);
  if(chaine[i] >= 'a' && chaine[i] <= 'z')
    new_chaine[i] = chaine[i] - 32;
  else
    new_chaine[i] = chaine[i];
  i++;
  while(chaine[i] != '\0')
    {
      new_chaine[i] = chaine[i];
      i++;
    }
  if(chaine[i - 1] != '.')
    new_chaine[i] = '.';
  return (new_chaine);
}
