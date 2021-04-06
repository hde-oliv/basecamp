/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 13:27:05 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/04 13:58:05 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int a_value;
	int b_value;
	int mod_result;
	int div_result;

	a_value = *a;
	b_value = *b;
	mod_result = (a_value % b_value);
	div_result = (a_value / b_value);
	*a = div_result;
	*b = mod_result;
}
