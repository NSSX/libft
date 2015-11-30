/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 10:55:15 by avella            #+#    #+#             */
/*   Updated: 2015/11/30 18:57:45 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_chainereturned(char *chaine, int i2, int i, char const *s)
{
	int count;

	count = 0;
	while (i2 <= i)
	{
		chaine[count] = s[i2];
		count++;
		i2++;
	}
	chaine[count] = '\0';
	return (chaine);
}

char			*ft_strtrim(char const *s)
{
	char	*chaine;
	int		i;
	int		i2;

	i2 = 0;
	i = 0;
	if (!s)
		return (NULL);
	chaine = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (chaine == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	i2 = i;
	while (s[i] != '\0')
		i++;
	i--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	return (ft_chainereturned(chaine, i2, i, s));
}
