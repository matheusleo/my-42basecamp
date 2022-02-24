/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:09:37 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/17 14:55:49 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *word)
{
	int	len;

	len = 0;
	while (word[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	counter;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	counter = 0;
	if (size <= d_len)
		return (size + s_len);
	if (d_len < size)
	{
		while (src[counter] != '\0' && (counter + d_len) < size - 1)
		{
			dest[d_len + counter] = src[counter];
			counter++;
		}
		dest[d_len + counter] = '\0';
	}
	return (d_len + s_len);
}
