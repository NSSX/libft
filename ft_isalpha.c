#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int ft_isalpha(int c)
{
  if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
      return (1);
    }
  else
    return (0);
}

int main()
{
  ft_putchar(ft_isalpha('%') + 48);
  ft_putchar('\n');
  return (0);
}
