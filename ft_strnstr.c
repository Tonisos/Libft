/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemontalbetti <antoinemontalbetti@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:15:41 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/13 18:40:12 by antoinemont      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	if (!haystack)
		return (NULL);
	if (!needle)
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i] && haystack[i] == needle[j] && i < len)
		{
			i++;
			j++;
		}
		i++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i - j - 1]);
	}
	return (0);
}
