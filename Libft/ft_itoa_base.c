/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcutjack <lcutjack@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 15:04:59 by lcutjack          #+#    #+#             */
/*   Updated: 2019/01/29 17:12:00 by lcutjack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	zap_mas(char *f)
{
	int i;

	i = -1;
	while (++i < 10)
		f[i] = i;
	while (++i < 17)
		f[i] = 65 + i;
}

char	*ft_itoa_base(int n, int base)
{
	char			f[17];
	char			new[35];
	char			*p;
	int				sign;
	unsigned int	k;

	zap_mas(f);
	p = &new[34];
	*p = '\0';
	sign = (n < 0);
	k = (n < 0) ? (unsigned int)0 - n : n;
	while (k > 0)
	{
		*(--p) = f[k % base];
		k /= base;
	}
	if (sign)
		*(--p) = '-';
	return (ft_strdup(p));
}
