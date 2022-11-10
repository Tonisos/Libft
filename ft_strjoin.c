/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:34:14 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/10 15:20:20 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	char	*join;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	join = (char *) malloc(sizeof(char) * size);
	if (!join)
		return (NULL);
	while (*s1 != '\0')
		*join++ = *s1++;
	while (*s2 != '\0')
		*join++ = *s2++;
	*join = '\0';

return (join);
}