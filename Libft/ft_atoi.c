/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcutjack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 13:39:01 by lcutjack          #+#    #+#             */
/*   Updated: 2018/12/03 17:20:13 by lcutjack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	size_t		i;
	long long	new;
	long long	prev;
	int			sign;

	i = 0;
	new = 0;
	sign = 1;
	while ((s[i] >= 8 && s[i] <= 14) || s[i] == 32)
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		sign = 44 - s[i];
		i++;
	}
	while (s[i] && s[i] <= '9' && s[i] >= '0')
	{
		prev = new;
		new = new * 10 + sign * (s[i++] - '0');
		if (sign > 0 && new < prev)
			return (-1);
		if (sign < 0 && new > prev)
			return (0);
	}
	return ((int)new);
}
