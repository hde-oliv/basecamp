/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:19:32 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/15 18:31:15 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int counter;

	counter = 0;
	while ((s1[counter] == s2[counter]) && (s1[counter] != '\0') \
	&& (s2[counter] != '\0'))
		counter++;
	return (s1[counter] - s2[counter]);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

void	ft_swap2(char **a, char **b)
{
	char *ap;

	ap = *a;
	*a = *b;
	*b = ap;
}

int		main(int argc, char *argv[])
{
	char	*pointer;
	int		i;
	int		j;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				ft_swap2(&argv[j], &argv[j + 1]);
			j++;
		}
		i++;
	}
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
