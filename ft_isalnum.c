#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

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

int main()
{
  ft_putchar(ft_isalnum('4') + 48);
  ft_putchar('\n');
  return (0);
}



