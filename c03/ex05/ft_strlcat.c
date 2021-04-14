/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:46:16 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/04/13 20:30:38 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	counter_2;
	unsigned int	dest_org_size;

	counter = 0;
	counter_2 = 0;
	dest_org_size = ft_strlen(dest);
	while (dest[counter] != '\0')
		counter++;
	if (counter > size)
		return (ft_strlen(src) + size);
	while (counter < (size - 1))
	{
		dest[counter] = src[counter_2];
		counter++;
		counter_2++;
	}
	dest[counter] = '\0';
	return (ft_strlen(src) + dest_org_size);
}
