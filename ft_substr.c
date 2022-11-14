/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:12:50 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/14 11:32:51 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;

	if ((unsigned int)len < start )
	{
		sub = (char *) malloc(sizeof(*s));
		sub[0] = '\0';
		return (sub);
	}
	sub = (char *) malloc(sizeof(*s) * (len + 1));
	if (!sub)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
			sub[j++] = s[i];
		i++;
	}
	sub[j] = '\0';
	return (sub);
}
