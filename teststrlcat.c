/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teststrlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:39:02 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/10 11:54:38 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

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
	while (src[j] && i < dstsize - sizedst - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (sizesrc + sizedst);
}

int main() { 
    char *s = "hello duplicates"; 
    char target[] = "target buffer"; 
	char *s1 = "hello duplicates"; 
    char target2[] = "target buffer"; 

	printf("%zu\n", ft_strlcat(target, s, 10));
    printf("%s\n", target); 
    printf("%zu\n", strlcat(target2, s1, 10)); 
    printf("%s\n", target); 
 
    return 0; 
} 