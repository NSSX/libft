#include "libft.h"
#include <stdio.h>

int main()
{
  char *l = "abc";
  char *s = "abc";

  printf("%d",ft_strncmp(l,s,3));
  return (0);
}
