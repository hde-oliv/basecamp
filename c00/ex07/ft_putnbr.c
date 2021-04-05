/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 19:30:49 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/05 20:05:46 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	negative_or_negative_max(int nb, int *pointer)
{
	if (nb <= -0)
		ft_putchar(45);
	if (nb == -2147483648)
		ft_putchar('2');
	nb = (nb == -2147483648) ? -147483648 : nb;
	nb = (nb <= -0) ? -nb : nb;
	*pointer = nb;
}

void	ft_putnbr(int nb)
{
	int check;
	int counter;
	int number[10];
	int *pointer;

	check = 1;
	counter = 10;
	pointer = &nb;
	negative_or_negative_max(nb, pointer);
	while (--counter != -1)
	{
		while (check == 1)
		{
			if (counter != 9)
				number[counter] = (nb != 0) ? (nb % 10) + 48 : 0;
			else
				number[counter] = (nb != 0) ? (nb % 10) + 48 : (nb % 10) + 48;
			check = 0;
		}
		nb = nb / 10;
		check = 1;
	}
	while (++counter != 10)
		if (number[counter] != 0)
			ft_putchar(number[counter]);
}
