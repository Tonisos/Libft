/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:21:25 by antoinemont       #+#    #+#             */
/*   Updated: 2022/11/16 13:59:39 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	i = 0;
	j = ft_strlen(s1);
	k = 0;
	while (s1[i] && ft_strchr((char *)set, (int)s1[i]) != 0)
		i++;
	while ((j > 0) && ft_strrchr((char *)set, (int)s1[j]) != 0)
		j--;
	trim = ft_substr(s1, i, (ft_strlen(s1) - i - ft_strlen(&s1[j])) + 1);
	return (trim);
}
