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

char *ft_strstr (const char *src, const char *occ)
{
  int index;
  int index2;


  index = 0;
  index2 = 0;
  while(src[index] != '\0')
    {
      if(src[index] == occ[0])
	{
	  while(src[index] == occ[index2])
	    {
	      index++;
	      index2++;
	    }  
	  if(occ[index2--] == '\0')
	    {
	      return((char *)occ);
	    }
	  index2 = 0;
	}
      index++;
      }
  return(NULL);
}

int main()
{
  ft_putstr(ft_strstr("wqdqwsalutdwdwd", "salutd"));
  ft_putchar('\n');
  return (0);
}
