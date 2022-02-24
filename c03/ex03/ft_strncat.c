/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:08:12 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/15 18:08:55 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d_length;
	unsigned int	counter;

	d_length = ft_strlen(dest);
	counter = 0;
	while (src[counter] != '\0' && counter < nb)
	{
		dest[d_length + counter] = src[counter];
		counter++;
	}
	dest[d_length + counter] = '\0';
	return (dest);
}
