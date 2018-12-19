/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcutjack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:11:19 by lcutjack          #+#    #+#             */
/*   Updated: 2018/12/03 21:43:19 by lcutjack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*forlink;
	t_list	*tmp;

	if (!f || !lst)
		return (NULL);
	new = NULL;
	forlink = NULL;
	while (lst)
	{
		tmp = f(lst);
		if (!new)
			new = tmp;
		lst = lst->next;
		if (forlink)
			forlink->next = tmp;
		forlink = tmp;
	}
	return (new);
}
