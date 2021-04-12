/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:18:05 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/07 02:14:18 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int counter;
	int answer;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] > 31 && str[counter] < 127)
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
