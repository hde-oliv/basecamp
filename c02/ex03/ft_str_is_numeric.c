/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:08:00 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/07 01:03:21 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int counter;
	int answer;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 48 && str[counter] <= 57)
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
