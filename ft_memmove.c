/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:27:26 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/09 10:24:16 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)

{
	char	*i;
	char	*j;

	if (!dst && !src)
		return (NULL);
	i = (char *)dst;
	j = (char *)src;
	if (j < i)
	{
		i += len - 1;
		j += len - 1;
		while (len-- > 0)
			*i-- = *j--;
	}
	else
	{
		while (len > 0)
		{
			*i++ = *j++;
			len--;
		}
	}
	return (dst);
}
