/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:43:38 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/19 01:34:53 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.>

char	*ft_strdup(char *src)
{
	char			*new_str;
	unsigned int	len;
	unsigned int	index;

	len = 0;
	index = 0;
	while (src[len])
		len++;
	len++;
	new_str = (char)malloc(sizeof (char) * (len + 1));
	while (index < len)
	{
		new_str[index] = src[index];
		index++;
	}
	new_str[len] = '\0';
	return (new_str);
}
