/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 23:00:39 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/03 21:58:43 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	circles(int x, int y, int array[y][x])
{
	--x;
	--y;
	array[0][0] = 111;
	array[y][x] = 111;
	array[y][0] = 111;
	array[0][x] = 111;
}

void	pipes_and_hyphens(int x, int y, int array[y][x])
{
	int		line;
	int		column;

	--x;
	--y;
	line = y - 1;
	while (line > 0)
	{
		array[line][0] = 124;
		array[line][x] = 124;
		line--;
	}
	column = x - 1;
	while (column > 0)
	{
		array[0][column] = 45;
		array[y][column] = 45;
		column--;
	}
}

void	spaces(int x, int y, int array[y][x])
{
	int		line;
	int		column;

	--x;
	--y;
	column = x - 1;
	line = y - 1;
	while (column > 0)
	{
		line = y - 1;
		array[line][column] = 32;
		while (line > 0)
		{
			array[line][column] = 32;
			line--;
		}
		column--;
	}
}

void	rush(int x, int y)
{
	int		array[y][x];
	int		line;
	int		column;

	line = -1;
	column = -1;
	circles(x, y, array);
	pipes_and_hyphens(x, y, array);
	if (y != 1)
		spaces(x, y, array);
	while (++line < y)
	{
		while (++column < x)
		{
			ft_putchar(array[line][column]);
		}
		column = -1;
		ft_putchar('\n');
	}
}
