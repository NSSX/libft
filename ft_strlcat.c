/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:13:37 by avella            #+#    #+#             */
/*   Updated: 2015/11/26 16:13:46 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t dst_mem;

	i = 0;
	dst_mem = ft_strlen(dst);
	if (size <= dst_mem)
		return (size + ft_strlen(src));
	while (dst_mem + i < (size - 1) && src[i] != '\0')
	{
		dst[i + dst_mem] = src[i];
		i++;
	}
	dst[i + dst_mem] = '\0';
	return (dst_mem + ft_strlen(src));
}
