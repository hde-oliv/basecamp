/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:10:04 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/11 13:39:55 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	solver(char *viewer, char array[4][4])
{
	int		i;
	int 	j;
	char 	col_up[4];
	char	col_down[4];

	col_up[0] = viewer[0];
	col_up[1] = viewer[2];
	col_up[2] = viewer[4];
	col_up[3] = viewer[6];
	col_down[0] = viewer[8];
	col_down[1] = viewer[10];
	col_down[2] = viewer[12];
	col_down[3] = viewer[14];
	array[0][0] = 42;
	array[0][1] = 42;
	array[0][2] = 42;
	array[0][3] = 42;
	array[1][0] = 42;
	array[1][1] = 42;
	array[1][2] = 42;
	array[1][3] = 42;
	array[2][0] = 42;
	array[2][1] = 42;
	array[2][2] = 42;
	array[2][3] = 42;
	array[3][0] = 42;
	array[3][1] = 42;
	array[3][2] = 42;
	array[3][2] = 42;
	

	i = 0;
    while (i <= 3)
	{
        j = 0;
        while (j <= 3)
		{
            if (col_up[i] == '4' && col_down[j] == '1')
			{
                array[0][j] = '1';
                array[1][j] = '2';
                array[2][j] = '3';
                array[3][j] = '4';
            } 
			else if (col_up[i] == '1' && col_down[j] == '4')
			{
                array[0][j] = '1';
                array[1][j] = '2';
                array[2][j] = '3';
                array[3][j] = '4';
            } 
            if (col_up[i] == '1' && col_down[i] == '2')
			{
                array[0][i] = '4';
                array[3][i] = '3';
            }
			else if(col_up[i] == '2' && col_down[i] == '1')
			{
                array[0][i] = '3';
                array[3][i] = '4';
            }
            j++;
        }
        i++;
	}
}