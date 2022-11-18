/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:43:25 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/18 08:40:51 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int						sign;
	unsigned long long int	result;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\f' || *str == '\v' || *str == '\r')
		str++;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{	
		result = result * 10 + *str - '0';
		str++;
	}
	if (result > LLONG_MAX && sign > 0)
		return (-1);
	if (result > LLONG_MAX && sign < 0)
		return (0);
	return ((int)(result * sign));
}
