/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:41:42 by avella            #+#    #+#             */
/*   Updated: 2015/11/30 15:15:44 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int index;

	index = 0;
	if (s1 && s2)
	{
		while (s1[index] != '\0' && s2[index] != '\0'
				&& s1[index] == s2[index])
		{
			index++;
		}
		if (s1[index] == '\0' && s2[index] == '\0')
			return (1);
	}
	return (0);
}
