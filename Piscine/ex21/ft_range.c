/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcutjack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:52:08 by lcutjack          #+#    #+#             */
/*   Updated: 2018/11/21 11:04:03 by lcutjack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int	*r;

	i = 0;
	if (min >= max)
		return (NULL);
	r = malloc(sizeof(int) * (max - min));
	while (min < max)
		r[i++] = min++;
	return (r);
}
