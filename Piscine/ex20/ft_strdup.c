/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcutjack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:30:09 by lcutjack          #+#    #+#             */
/*   Updated: 2018/11/20 20:06:27 by lcutjack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*c;
	int		i;

	i = -1;
	c = malloc(sizeof(char) * (ft_strlen(src) + 1));
	while (src[++i])
		c[i] = src[i];
	c[i++] = '\0';
	return (c);
}
