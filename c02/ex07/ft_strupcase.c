/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:23:37 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/07 01:17:00 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int counter;

	counter = -1;
	while (str[++counter] != '\0')
	{
		if (str[counter] >= 97 && str[counter] <= 122)
			str[counter] = (str[counter] - 32);
	}
	return (str);
}
