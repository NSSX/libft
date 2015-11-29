/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:23:28 by avella            #+#    #+#             */
/*   Updated: 2015/11/24 18:23:52 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*chaine;
	size_t	i;

	i = 0;
	chaine = ft_memalloc(len + 1);
	if (chaine)
	{
		while (i < len && s[start] != '\0')
		{
			chaine[i] = s[start];
			start++;
			i++;
		}
		chaine[i] = '\0';
		return (chaine);
	}
	else
		return (NULL);
}
