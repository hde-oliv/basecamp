/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_is_valid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:08:30 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/11 13:28:01 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	game_is_valid(char *viewer)
{
	int i;

	i = 0;
	while (i < 23)
	{
		if (viewer[i] < '1' || viewer[i] > '4')
		{
			write(1, "Error\n", 6);
			return (0);
			break ;
		}
		else if (((viewer[i] + viewer[i + 8]) <= 'e') && ((viewer[i] + viewer[i + 8]) >= 'c'))
			i += 2;
		else
		{
			write(1, "Error\n", 6);
			return (0);
			break ;
		}
	}
	return (1);
}
