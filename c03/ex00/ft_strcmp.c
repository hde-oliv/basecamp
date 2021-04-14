/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:35:32 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/13 20:43:58 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int counter;

	counter = 0;
	while ((s1[counter] == s2[counter]) && (s1[counter] != '\0') \
	&& (s2[counter] != '\0'))
		counter++;
	return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
}
