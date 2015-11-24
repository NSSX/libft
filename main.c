#include "libft.h"
#include <stdio.h>
int main()
{
  char c[50] = "x";
  char d[50] = "ssasalutdwdspspsp";
  
  printf("%s",ft_strnstr(d,c,80));
  return (0);
}
