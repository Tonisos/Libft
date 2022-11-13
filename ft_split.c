/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemontalbetti <antoinemontalbetti@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:38:46 by antoinemont       #+#    #+#             */
/*   Updated: 2022/11/13 18:15:46 by antoinemont      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlign(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
			count ++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (i + 1);
}
int ft_nbrcol(char const *s, char c, int i)
{
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	split = malloc (ft_nbrlign(s, c) * sizeof(char));
	while (s[i])
	{
		j = 0;
		while (s[i] && s[i] != c)
		{
			split[k] = malloc (sizeof (char) * ft_nbrcol(s, c, i));
			split[k][j] = s[i];
			i++;
			j++;
		}
		k++;
		while (s[i] && s[i] == c)
			i++;
	}
	split[k] = 0;
	return (split);
}

