/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:12:50 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/15 13:02:23 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	length_to_copy(char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	length;

	i = 0;
	length = 0;
	while (s[i] && length < len)
	{
		if (i >= start)
			length++;
		i++;
	}
	return (length);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	length;
	char	*str;

	if (!s)
		return (NULL);
	length = length_to_copy((char *)s, start, len);
	str = ft_calloc(length + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < length)
		str[i++] = s[start++];
	return (str);
}
