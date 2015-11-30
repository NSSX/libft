/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:17:40 by avella            #+#    #+#             */
/*   Updated: 2015/11/30 15:13:07 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		index;
	char	*chaine;

	index = 0;
	if (s && f)
	{
		chaine = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
		if (chaine)
		{
			while (s[index] != '\0')
			{
				chaine[index] = f((char)s[index]);
				index++;
			}
			chaine[index] = '\0';
			return (chaine);
		}
	}
	return (NULL);
}
