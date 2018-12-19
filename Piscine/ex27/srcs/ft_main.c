/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcutjack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 19:00:45 by lcutjack          #+#    #+#             */
/*   Updated: 2018/11/20 21:53:08 by lcutjack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *c)
{
	int i;

	i = 0;
	while (c[i])
		ft_putchar(c[i++]);
}

int		main(int ac, char **av)
{
	int		fn;
	char	c;

	if (ac > 2)
		ft_putstr("Too many arguments.\n");
	else if (ac < 2)
		ft_putstr("File name missing.\n");
	else
	{
		fn = open(av[1], O_RDONLY);
		while (read(fn, &c, 1))
			ft_putchar(c);
		close(fn);
	}
	return (0);
}
