/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:52:50 by avella            #+#    #+#             */
/*   Updated: 2015/11/24 15:53:58 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t		index;
	size_t		index2;

	index2 = 0;
	index = 0;
	while (s1[index] != '\0')
	{
		index++;
	}
	while (s2[index2] != '\0' && index2 < n)
	{
		s1[index] = s2[index2];
		index++;
		index2++;
	}
	s1[index] = '\0';
	return (s1);
}
