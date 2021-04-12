/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:06:21 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/07 01:02:30 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int counter;
	int answer;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 65 && str[counter] <= 90) || \
		(str[counter] >= 97 && str[counter] <= 122))
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
