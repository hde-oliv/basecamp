/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 13:01:54 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/04 13:26:39 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int mod_result;
	int div_result;

	mod_result = (a % b);
	div_result = (a / b);
	*div = div_result;
	*mod = mod_result;
}
