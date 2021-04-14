/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:43:29 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/13 20:44:05 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned	int counter;

	counter = 0;
	while ((s1[counter] == s2[counter]) && (s1[counter] != '\0') &&\
	(s2[counter] != '\0'))
		counter++;
	if (counter < n)
		return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
	else
		return (0);
}
