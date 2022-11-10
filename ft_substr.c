/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:12:50 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/10 17:38:30 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = start;
	sub = (char *) malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (s[j] && i < len)
	{
		sub[i++] = s[j++];
	}
	sub[i] = '\0';
	return (sub);
}
