/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:44:16 by avella            #+#    #+#             */
/*   Updated: 2015/11/26 11:50:21 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	int				resultat;
	unsigned char	*src1;
	unsigned char	*src2;

	src1 = (unsigned char *)s1;
	src2 = (unsigned char *)s2;
	resultat = 0;
	i = 0;
	while (src1[i] == src2[i] && i < n && src1[i] != '\0' && src2[i] != '\0')
		i++;
	if (i >= n)
		i--;
	resultat = src1[i] - src2[i];
	return (resultat);
}
