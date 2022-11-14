/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:03:22 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/14 09:51:11 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	t1 = (unsigned char *) s1;
	t2 = (unsigned char *) s2;
	while ((t1[i] == t2[i]) && i < n - 1)
		i++;
	return (t1[i] - t2[i]);
}
