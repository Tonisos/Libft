/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:34:14 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/18 11:18:38 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	char	*join;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	join = (char *) malloc(sizeof(char) * size);
	if (!join)
		return (NULL);
	while (s1[j] != '\0')
	{
			join[i++] = s1[j++];
	}
	j = 0;
	while (s2[j] != '\0')
	{	
		join[i++] = s2[j++];
	}
	join[i] = '\0';
	return (join);
}
