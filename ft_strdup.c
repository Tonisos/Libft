/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:23:52 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/14 09:26:20 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*s2;
	size_t		i;

	i = 0;
	s2 = (char *)malloc ((strlen(s1) + 1) * sizeof(char));
	if (!s2)
		return(NULL);
	while (i < strlen(s1))
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
