/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:52:05 by avella            #+#    #+#             */
/*   Updated: 2015/11/30 15:14:28 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t index;

	index = 0;
	if (s1 && s2)
	{
		while (s1[index] != '\0' && s2[index] != '\0' &&
				s1[index] == s2[index] && index < n)
			index++;
		if ((s1[index] == '\0' && s2[index] == '\0') || index == n)
			return (1);
	}
	return (0);
}
