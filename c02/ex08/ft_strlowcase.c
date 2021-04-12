/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:57:28 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/07 01:17:48 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	counter;

	counter = -1;
	while (str[++counter] != '\0')
	{
		if (str[counter] >= 65 && str[counter] <= 90)
			str[counter] = (str[counter] + 32);
	}
	return (str);
}
