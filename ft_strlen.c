#include "libft.h"

int	ft_strlen(const char *str)
{
  int index;

  index = 0;
  while(str[index] != '\0')  
    index++;
  return  (index);
}
