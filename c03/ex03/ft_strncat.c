/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 17:54:32 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/13 21:07:21 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				counter;
	unsigned int	counter_2;

	counter = 0;
	counter_2 = 0;
	while (dest[counter] != '\0')
		counter++;
	while (counter_2 < nb && src[counter_2] != '\0')
	{
		dest[counter] = src[counter_2];
		counter++;
		counter_2++;
	}
	dest[counter] = '\0';
	return (dest);
}
