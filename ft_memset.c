/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:41:33 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/09 09:02:56 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dest;

	if (b == NULL)
		return (NULL);
	dest = b;
	while (len > 0)
	{
		*dest = (unsigned char) c;
		dest ++;
		len --;
	}
	return (b);
}
