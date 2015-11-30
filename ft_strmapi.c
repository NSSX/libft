/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:25:17 by avella            #+#    #+#             */
/*   Updated: 2015/11/30 15:14:50 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*chaine;

	index = 0;
	if (s && f)
	{
		chaine = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
		if (!chaine)
			return (NULL);
		while (s[index] != '\0')
		{
			chaine[index] = f(index, (char)s[index]);
			index++;
		}
		chaine[index] = '\0';
		return (chaine);
	}
	return (NULL);
}
