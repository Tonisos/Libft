/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:34:01 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/10 17:47:34 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t	n)
{
	char	a;
	char	*s1;

	a = (char) c;
	s1 = (void *)s;
	while (n > 0)
	{
		if (a == *s1)
			return (s1);
		n--;
		s1++;
	}
	return (NULL);
}
