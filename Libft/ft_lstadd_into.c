/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddinto.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcutjack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 13:48:54 by lcutjack          #+#    #+#             */
/*   Updated: 2018/12/03 16:05:56 by lcutjack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_into(t_list *lst, t_list *new)
{
	t_list	*tmp;

	tmp = lst->next;
	ft_lstadd(&tmp, new);
	lst->next = tmp;
}
