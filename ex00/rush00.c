/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmasiten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 15:19:19 by kmasiten          #+#    #+#             */
/*   Updated: 2020/01/12 16:13:27 by kmasiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_alpha(int x, int x2)
{
	ft_putchar('o');
	while (x > 2)
	{
		ft_putchar('-');
		x--;
	}
	if (x > 1)
		ft_putchar('o');
	ft_putchar('\n');
	x = x2;
}

void	ft_centre(int c, int x, int x2)
{
	while (c > 2)
	{
		ft_putchar('|');
		while (x > 2)
		{
			ft_putchar(' ');
			x--;
		}
		if (x == 2)
			ft_putchar('|');
		ft_putchar('\n');
		c--;
		x = x2;
	}
}

int		rush00(int x, int c)
{
	int x2;

	x2 = x;
	if (x < 1 || c < 1)
		return (0);
	if (c > 0)
		ft_alpha(x, x2);
	if (c == 2)
		ft_alpha(x, x2);
	if (c > 2)
	{
		ft_centre(c, x, x2);
		ft_alpha(x, x2);
	}
	return (0);
}
