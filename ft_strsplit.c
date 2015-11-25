/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:15:01 by avella            #+#    #+#             */
/*   Updated: 2015/11/25 15:23:44 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_word(char const *s, char c)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

char	**malloc_word(char **tab, char const *s, char c, int i)
{
	int indext;
	int count;

	count = 0;
	indext = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
			{
				i++;
				count++;
			}
			tab[indext] = (char *)malloc(sizeof(char) * count + 1);
			count = 0;
			indext++;
		}
		else
			i++;
	}
	tab[indext] = (char *)malloc(sizeof(char) * 2);
	tab[indext][0] = '\0';
	return (tab);
}

char	**write_word(char **tab, char const *s, char c)
{
	int i;
	int indext;
	int indext2;

	indext = 0;
	indext2 = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
			{
				tab[indext][indext2] = s[i];
				indext2++;
				i++;
			}
			indext++;
			indext2 = 0;
		}
		else
			i++;
	}
	tab[indext][indext2] = '\0';
	return (tab);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		nbword;
	int		i;

	i = 0;
	nbword = count_word(s, c);
	tab = (char **)malloc(sizeof(char *) * nbword + 1);
	if (tab == NULL)
		return (NULL);
	malloc_word(tab, s, c, i);
	write_word(tab, s, c);
	return (tab);
}
