/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:09:59 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/10 22:31:27 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printer(char array[4][4])
{
	int		line;
	int		column;

	line = -1;
	column = -1;
	while (++line < 4)
	{
		while (++column < 4)
		{
			ft_putchar(array[line][column]);
		}
		column = -1;
		ft_putchar('\n');
	}
}
