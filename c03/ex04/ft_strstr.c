/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:47:55 by mleonard          #+#    #+#             */
/*   Updated: 2022/02/17 14:55:59 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FALSE 0
#define TRUE 1

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_strcmp_from_n(char *s1, char *s2, unsigned int start)
{
	unsigned int	counter;
	unsigned int	index;

	counter = start;
	index = 0;
	while (s2[index] != '\0')
	{
		if (s1[counter] != s2[index])
			return (FALSE);
		counter++;
		index++;
	}
	return (TRUE);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	s_counter;
	int	s_len;
	int	f_len;

	s_counter = 0;
	s_len = ft_strlen(str);
	f_len = ft_strlen(to_find);
	while (str[s_counter] != '\0' && f_len <= (s_len - s_counter))
	{
		if (ft_strcmp_from_n(str, to_find, s_counter))
			return (str + s_counter);
		s_counter++;
	}
	return ("(null)");
}
