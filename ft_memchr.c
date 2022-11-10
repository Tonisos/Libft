/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:04:10 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/10 12:04:26 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	a;
	char	*s1;

	a = (char) c;
	s1 = (char *)s;
	while (s1++ && n-- > 0)
	{
		if (a == *s1)
			return (s1);
	}
	return (NULL);
	}
	