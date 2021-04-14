/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 22:36:44 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/14 23:25:42 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_pseudo_space(char space)
{
	if (space == ' ' || space == '\f' || space == '\n' || space == '\r' \
	|| space == '\t' || space == '\v' || space == '+')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int i;
	int minus;
	int res;

	minus = 1;
	res = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_pseudo_space(str[i]))
			i++;
		else if (str[i] == '-')
		{
			minus *= -1;
			i++;
		}
		else if (str[i] < 58 && str[i] > 47)
		{
			res = (res * 10) + (str[i] - '0');
			i++;
		}
		else
			return (minus * res);
	}
	return (minus * res);
}

int main(void)
{
	char *a;

	a = "   ---784279asfdasdfgsd5639487562";

	printf("Resultado %d\n", ft_atoi(a));
	return 0;
}