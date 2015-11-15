#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int ft_isprint(int c)
{
  if (c >= 32 && c <= 127)
    {
      return (1);
    }
  else
    return (0);
}

int main()
{
  ft_putchar(ft_isprint(128) + 48);
  ft_putchar('\n');
  return (0);
}


