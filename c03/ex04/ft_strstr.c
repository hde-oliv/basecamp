/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:44:12 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/13 20:31:37 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int counter;
	int counter_2;

	counter = 0;
	if (to_find[0] == '\0')
		return (&str[0]);
	while (str[counter] != '\0')
	{
		counter_2 = 0;
		while (str[counter + counter_2] == to_find[counter_2])
		{
			if (to_find[counter_2 + 1] == '\0')
				return (&str[counter]);
			counter_2++;
		}
		counter++;
	}
	return (0);
}
