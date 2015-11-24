/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:14:19 by avella            #+#    #+#             */
/*   Updated: 2015/11/24 16:14:40 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	resultat;
	int	index;

	index = 0;
	resultat = 0;
	while (s1[index] == s2[index])
		index++;
	resultat = s1[index] - s2[index];
	return (resultat);
}
