/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 22:36:44 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/15 17:14:40 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	*pointer;

	i = 1;
	while (i < argc)
	{
		pointer = argv[i];
		while (*pointer != '\0')
			write(1, pointer++, 1);
		write(1, "\n", 1);
		i++;
	}
}
