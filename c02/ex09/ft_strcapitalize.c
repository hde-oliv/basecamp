/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 19:00:19 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/07 02:14:42 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int counter;
	int check;

	counter = -1;
	check = 1;
	while (str[++counter] != '\0')
		if (str[counter] > 64 && str[counter] < 91)
			str[counter] = (str[counter] + 32);
	counter = -1;
	while (str[++counter] != '\0')
	{
		while (check == 1)
		{
			if (str[counter] >= 97 && str[counter] <= 122)
				str[counter] = (str[counter] - 32);
			check = 0;
		}
		if ((str[counter] > -1 && str[counter] < 48) || \
		(str[counter] > 57 && str[counter] < 65) || \
		(str[counter] > 90 && str[counter] < 97) || \
		(str[counter] > 122 && str[counter] <= 127))
			check = 1;
	}
	return (str);
}
