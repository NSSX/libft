/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:14:48 by avella            #+#    #+#             */
/*   Updated: 2015/11/24 16:15:52 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int resultat;
	int index;

	resultat = 0;
	index = 0;
	while ((s1[index] == s2[index]) && n > 0)
	{
		n--;
		index++;
	}
	resultat = s1[index] - s2[index];
	return (resultat);
}
