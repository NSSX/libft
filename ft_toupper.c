#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int ft_toupper(int c)
{
  if(c >= 'a' && c <= 'z')
    c -= 32;
  return (c);
}

int main()
{
  ft_putchar(ft_toupper('Z'));
  ft_putchar('\n');
  return (0);
}
