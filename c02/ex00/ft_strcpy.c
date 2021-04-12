/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 11:48:39 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/07 17:34:54 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = -1;
	while (src[++counter] != '\0')
		dest[counter] = src[counter];
	dest[counter] = '\0';
	return (dest);
}
