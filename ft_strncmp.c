#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  int resultat;
  int index;

  while((s1[index] == s2[index]) && n > 0 )
    {
      n--;
      index++;
    }  
  resultat = s1[index] - s2[index];
  return (resultat);
}

