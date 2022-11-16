/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:23:04 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/16 10:50:11 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sizechar(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		size ++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	i;
	long	m;

	m = n;
	i = ft_sizechar(m);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (m == 0)
		str[0] = '0';
	if (m < 0)
	{
		str[0] = '-';
		m = m * -1;
	}
	while (m > 0)
	{
		str[i--] = (m % 10) + 48;
		m /= 10;
	}
	return (str);
}
