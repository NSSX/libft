/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:37:49 by avella            #+#    #+#             */
/*   Updated: 2015/11/30 18:01:37 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*chaine;
	int		index;
	int		index2;

	index2 = 0;
	index = 0;
	if (!s1 || !s2)
		return (NULL);
	chaine = (char *)malloc(sizeof(char *) * (ft_strlen(s1)
				+ ft_strlen(s2) + 1));
	if (chaine == NULL)
		return (NULL);
	while (s1[index] != '\0')
	{
		chaine[index] = s1[index];
		index++;
	}
	while (s2[index2] != '\0')
	{
		chaine[index] = s2[index2];
		index++;
		index2++;
	}
	chaine[index] = '\0';
	return (chaine);
}
