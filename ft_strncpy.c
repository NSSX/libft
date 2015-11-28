/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:50:29 by avella            #+#    #+#             */
/*   Updated: 2015/11/24 15:50:58 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	index;

	index = 0;
	while (src[index] != '\0' && index < n)
	{
		dst[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dst[index] = '\0';
		index++;
	}
	return (dst);
}
