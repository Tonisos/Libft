/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:39:02 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/14 11:30:02 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	sizedst;
	size_t	sizesrc;

	sizedst = ft_strlen(dst);
	sizesrc = ft_strlen(src);
	j = 0;
	i = ft_strlen(dst);
	if (dstsize == 0 || dstsize <= sizedst)
		return (dstsize + sizesrc);
	while (src[j] && j < dstsize - sizedst - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (sizesrc + sizedst);
}
