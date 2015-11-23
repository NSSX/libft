#include "libft.h"

int ft_isalnum(int c)
{
  if (c >= '0' && c <= '9')
  {
      return (1);
  }
  else if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
  {
    return (1);
  }
  else
    return (0);
}



