/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:21:20 by avella            #+#    #+#             */
/*   Updated: 2015/11/26 15:30:27 by avella           ###   ########.fr       */
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

char	*myreturn(int n)
{
	if (n == 0)
		return ("0");
	if (n == -2147483648)
		return ("-2147483648");
	return (NULL);
}

char	*ft_itoa(int n)
{
	char	*chaine;
	int		count;
	int		myn;
	int		negativ;

	negativ = 0;
	count = 0;
	myn = n;
	if (n == 0 || n == -2147483648)
		return (myreturn(n));
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
