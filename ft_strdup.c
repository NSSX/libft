/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:46:57 by avella            #+#    #+#             */
/*   Updated: 2015/11/24 15:49:05 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int			index;
	char		*dupli;

	index = 0;
	dupli = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (dupli == NULL)
	{
		return (NULL);
	}
	while (s1[index] != '\0')
	{
		dupli[index] = s1[index];
		index++;
	}
	dupli[index] = '\0';
	return (dupli);
}
