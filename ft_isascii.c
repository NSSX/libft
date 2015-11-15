#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int ft_isascii(int c)
{
  if (c >= 0 && c <= 127)
    {
      return (1);
    }
  else
    return (0);
}

int main()
{
  ft_putchar(ft_isascii(127) + 48);
  ft_putchar('\n');
  return (0);
}


