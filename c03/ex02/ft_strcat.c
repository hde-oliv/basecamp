/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 22:49:20 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/08 18:06:54 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int counter;
	int counter_2;

	counter = 0;
	counter_2 = -1;
	while (dest[counter] != '\0')
		counter++;
	while (src[++counter_2] != '\0')
	{
		dest[counter] = src[counter_2];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
