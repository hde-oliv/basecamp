/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 15:29:08 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/06 00:58:21 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int counter;
	int counter_2;
	int array[size];

	counter = -1;
	counter_2 = size - 1;
	while (++counter < size)
	{
		array[counter] = tab[counter_2];
		counter_2--;
	}
	while (++counter_2 != size)
		tab[counter_2] = array[counter_2];
	counter = -1;
}
