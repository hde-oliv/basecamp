/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 23:15:54 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/08 22:29:39 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexadecimal(unsigned char decimal)
{
	unsigned int	hex[3];
	int				counter;

	counter = 3;
	hex[0] = ((decimal % 16) >= 10) ? (decimal % 16) + 87 : (decimal % 16) + 48;
	hex[1] = ((decimal / 16) >= 10) ? (decimal / 16) + 87 : (decimal / 16) + 48;
	hex[2] = 92;
	while (--counter != -1)
		write(1, &hex[counter], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int counter;
	int counter_2;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	counter_2 = -1;
	while (++counter_2 < counter)
	{
		if (str[counter_2] < 32 || str[counter_2] > 126)
			hexadecimal(str[counter_2]);
		else
			write(1, &str[counter_2], 1);
	}
}
