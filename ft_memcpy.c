/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:30:00 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/09 10:28:45 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*i;
	char	*j;

	if (!dst && !src)
		return (NULL);
	i = (char *)dst;
	j = (char *)src;
	while (n > 0)
	{
		*i++ = *j++;
		n--;
	}
	return (dst);
}
