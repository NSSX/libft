/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:07:11 by avella            #+#    #+#             */
/*   Updated: 2015/11/24 16:13:07 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t i2;
	size_t it;

	i2 = 0;
	i = 0;
	if (s2[0] == '\0')
		return ((void *)&s1[0]);
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] == s2[0])
		{
			it = i;
			while (s1[it] == s2[i2] && s1[it] != '\0' && it < n)
			{
				i2++;
				it++;
				if (s2[i2] == '\0')
					return ((void *)&s1[i]);
			}
			i2 = 0;
		}
		i++;
	}
	return (NULL);
}
