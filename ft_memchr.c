/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:04:10 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/10 17:14:10 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	a;
	char	*s1;

    if (!s)
        return (NULL);

	a = (char) c;
	s1 = (void *)s;
	while (s1++ && n-- > 0)
	{
		if (a == *s1)
			return (s1);
	}
	return (NULL);
	}
	