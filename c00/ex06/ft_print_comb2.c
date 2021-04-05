/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 17:03:45 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/05 16:34:38 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int num1[2];
	int num2[2];
	int counter;

	num1[0] = 48;
	num1[1] = 48;
	num2[0] = 48;
	num2[1] = 48;
	counter = 0;
	while (counter < 1000)
	{
		if (num2[1] == 58 && num2[0] == 57)
		{
			++num1[1];
			num2[1] = num1[1] + 1;
		}
		write(1, &num1[0], 1);
		write(1, &num1[1], 1);
		write(1, " ", 1);
		write(1, &num2[0], 1);
		write(1, &num2[1], 1);
		write(1, ", ", 2);
		counter++;
	}
}
