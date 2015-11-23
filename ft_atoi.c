#include "libft.h"

int	ft_atoi(char *str)
{
  int number;
  int negativ;
  int index;

  number = 0;
  index = 0;
  negativ = 0;
  while(str[index] == ' ' || str[index] == '\n' || str[index] == '\v' ||
	str[index] == '\t' || str[index] == '\f' || str[index] == '\r')
    index++;
  if(str[index] == '-')
    negativ++;
  if(str[index] == '-' || str[index] == '+')
    index++;
  while(str[index] >= '0' && str[index] <= '9')
    {
      number *= 10;
      number += ((int)str[index] - 48);
      index++; 
    }
  if (negativ == 1)
    return (-number);
  else
    return (number);
}
