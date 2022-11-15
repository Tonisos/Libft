/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:21:25 by antoinemont       #+#    #+#             */
/*   Updated: 2022/11/15 08:47:45 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isinset(char s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_countstart(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] && ft_isinset(s1[i], set))
		i++;
	return (i);
}

int	ft_countend(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (i > 0 && ft_isinset(s1[i], set))
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		count;
	int		j;
	char	*trim;

	if (set == NULL)
		return (ft_strdup(s1));
	j = 0;
	count = ft_countend(s1, set) - ft_countstart(s1, set) + 2;
	start = ft_countstart(s1, set);
	if (start > ft_countend(s1, set))
		return (ft_strdup(""));
	trim = (char *) malloc(sizeof(char) * count);
	if (!trim)
		return (NULL);
	while (start < ft_countend(s1, set) + 1)
	{
		trim[j] = s1[start];
		start++;
		j++;
	}
	trim[j] = '\0';
	return (trim);
}
