/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:03:22 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/10 11:20:18 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*t1;
	char	*t2;
	size_t	i;

	i = 0;
	t1 = (char *) s1;
	t2 = (char *) s2;
	while ((t1[i] == t2[i]) && i < n - 1)
		i++;
	return (t1[i] - t2[i]);
}
