#include "libft.h"

void	*ft_strcpy(char *src, char *dest)
{
	int index;

	index = 0;
	while(src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
