/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:25:17 by avella            #+#    #+#             */
/*   Updated: 2015/11/25 19:50:08 by avella           ###   ########.fr       */
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
		chaine = malloc(sizeof(char) * ft_strlen(s) + 1);
		while (s[index] != '\0')
		{
			chaine[index] = f(index, (char)s[index]);
			index++;
		}
		return (chaine);
	}
	return (NULL);
}