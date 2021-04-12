/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:16:15 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/07 01:05:24 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int counter;
	int answer;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 65 && str[counter] <= 90)
			counter++;
		else
		{
			answer = 0;
			break ;
		}
	}
	if (str[counter] == '\0')
		answer = 1;
	return (answer);
}
