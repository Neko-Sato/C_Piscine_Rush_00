/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:18:39 by ketakgi           #+#    #+#             */
/*   Updated: 2023/03/12 19:52:21 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c); 

void	ft_ch_symble(int i, int j, int x, int y);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			ft_ch_symble(i, j, x, y);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

void	ft_ch_symble(int i, int j, int x, int y)
{
	if (j == 0 && (i == 0 || i == y - 1))
	{
		ft_putchar('A');
	}
	else if (x == 1 && y == 1)
	{
		ft_putchar('A');
	}
	else if (j == x - 1 && (i == 0 || i == y - 1))
	{
		ft_putchar('C');
	}
	else if ((i == 0 || i == y - 1) || (j == 0 || j == x - 1))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}
