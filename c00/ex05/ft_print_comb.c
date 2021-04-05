/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 21:12:03 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/05 16:33:12 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int		counter;
	int		num[3];

	counter = 0;
	num[0] = 48;
	num[1] = num[0] + 1;
	num[2] = num[1] + 1;
	while (counter < 120)
	{
		if (num[1] >= 56)
			num[1] = ++num[0];
		if (num[2] > 57)
			num[2] = ++num[1];
		if (num[2] == num[1])
			num[2]++;
		write(1, &num[0], 1);
		write(1, &num[1], 1);
		write(1, &num[2], 1);
		if (num[0] != 55 || num[1] != 56 || num[2] != 57)
			write(1, ", ", 2);
		num[2]++;
		counter++;
	}
}
