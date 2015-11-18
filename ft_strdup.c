#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putstr(char *str)
{
  int index;

  index = 0;
  while(str[index] != '\0')
    {
      ft_putchar(str[index]);
      index++;
    }
}

char *ft_strdup(const char *s)
{
  int index;
  char *dupli;

  index = 0;
  dupli = malloc(sizeof(char) * sizeof(s));
  if(dupli == NULL)
    {
      return(NULL);
    }
  while(s[index] != '\0')
    {
      dupli[index] = s[index];
      index++;
    }
  return (dupli);
}

int main()
{
  char *lol = "saluuuut";

  ft_putstr(ft_strdup(lol));
  ft_putchar('\n');
  return (0);
}
