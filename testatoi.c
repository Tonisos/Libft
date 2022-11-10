/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testatoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:43:25 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/10 09:29:36 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

    result = 0;
    sign = 1;
    while (*str == ' ' || *str == '\t' || *str =='\n' || *str == '\f' || *str == '\v')
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
    return (result * sign);
}

int main()
 {

    char tab[] = "    -899";
    char tab2[] = "   -899";

    
    
    printf( "%d\n", atoi(tab));
    printf( "%d\n", ft_atoi(tab2));
    return 0;
}

