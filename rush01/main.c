/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 14:18:10 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/11 13:30:47 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		game_is_valid(char *viewer);
void		solver(char *viewer, char array[4][4]);
void	printer(char array[4][4]);


int		main(int argc, char *argv[])
{
	int		validation;
	char	*viewer;
	char	array[4][4];

	viewer = argv[1];

	validation = game_is_valid(viewer);
		if (validation == 1)
		{
			solver(viewer, array);
			printer(array);
		}
	return (0);
}
