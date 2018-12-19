/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcutjack <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 13:14:17 by lcutjack          #+#    #+#             */
/*   Updated: 2018/11/20 20:58:04 by lcutjack         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		ft_putchar(c[i++]);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (!s1[i] && !s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}

void	putall(int ac, char **a)
{
	int i;

	i = 1;
	while (i < ac)
	{
		ft_putstr(a[i++]);
		ft_putchar('\n');
	}
}

int		main(int ac, char **av)
{
	int		i;
	int		j;
	char	*c;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				c = av[i];
				av[i] = av[j];
				av[j] = c;
			}
			j++;
		}
		i++;
	}
	putall(ac, av);
	return (0);
}
