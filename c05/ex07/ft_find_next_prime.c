/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 22:36:44 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/15 02:24:11 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int result;
	int check;

	check = 1; /* If this was "check = nb - 1", it would have worked better */
	result = 1;
	if (nb <= 0 || nb == 1)
		nb = 2;
	while (nb > ++check)
		if ((nb % check) == 0)
			result = 0;
	if (result == 1)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
