/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:09:54 by avella            #+#    #+#             */
/*   Updated: 2015/11/30 11:10:08 by avella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_info(char *chaine)
{
	int i;
	int maj;
	int min;

	i = 0;
	maj = 0;
	min = 0;
	if (chaine)
	{
		while (chaine[i++] != '\0')
		{
			if (chaine[i] >= 97 && chaine[i] <= 122)
				min++;
			if (chaine[i] >= 65 && chaine[i] <= 90)
				maj++;
		}
		ft_putstr("Majuscule {");
		ft_putnbr(maj);
		ft_putstr("} Minuscule {");
		ft_putnbr(min);
		ft_putstr("} Nombre de carac :::: ");
		ft_putnbr(ft_strlen(chaine));
	}
}
