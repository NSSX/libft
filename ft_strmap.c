/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:17:40 by avella            #+#    #+#             */
/*   Updated: 2015/11/25 18:19:09 by avella           ###   ########.fr       */
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
		chaine = malloc(sizeof(char) * ft_strlen(s) + 1);
		while (s[index] != '\0')
		{
			chaine[index] = f((char)s[index]);
			index++;
		}
		return (chaine);
	}
	return (NULL);
}
