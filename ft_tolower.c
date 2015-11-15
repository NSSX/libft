#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int ft_tolower(int c)
{
  if(c >= 'A' && c <= 'Z')
    c += 32;
  return (c);
}

int main()
{
  ft_putchar(ft_tolower('A'));
  ft_putchar('\n');
  return (0);
}





