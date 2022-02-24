/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:12:23 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/15 14:17:38 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	counter;
	int	d_length;

	counter = 0;
	d_length = 0;
	while (dest[d_length] != '\0')
		d_length++;
	while (src[counter] != '\0')
	{
		dest[d_length] = src[counter];
		d_length++;
		counter++;
	}
	dest[d_length] = '\0';
	return (dest);
}
