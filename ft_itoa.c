/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:21:20 by avella            #+#    #+#             */
/*   Updated: 2015/11/25 17:02:54 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count(int n, int count)
{
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*mystr(char *chaine, int negativ, int count, int myn)
{
	if (negativ == 1)
		chaine[0] = '-';
	while (myn)
	{
		count--;
		chaine[count] = (myn % 10) + '0';
		myn /= 10;
	}
	return (chaine);
}

char	*ft_itoa(int n)
{
	char	*chaine;
	int		count;
	int		i;
	int		myn;
	int		negativ;

	negativ = 0;
	i = 0;
	count = 0;
	myn = n;
	if (n < 0)
	{
		negativ = 1;
		n = -n;
		count++;
		myn = n;
	}
	count = ft_count(n, count);
	chaine = (char *)malloc(sizeof(char) * count + 1);
	if (chaine == NULL)
		return (NULL);
	chaine[count] = '\0';
	mystr(chaine, negativ, count, myn);
	return (chaine);
}
