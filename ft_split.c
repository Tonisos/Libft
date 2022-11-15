/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:45:37 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/15 10:39:13 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrword(char const *s, char c)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != c)
			nbr ++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (nbr);
}

char	*ft_free(char **split, int lign)
{
	int	i;

	i = 0;
	while (i < lign)
	{
		free(split[i]);
		i++;
	}
	free (split);
	return (NULL);
}

char	*ft_word(char const *s, char c, int i, char **split)
{
	int		count;
	int		j;
	int		k;
	char	*word;

	count = 0;
	j = i;
	k = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		count++;
	}
	word = malloc ((count + 1) * sizeof(char));
	if (!word)
		return (ft_free(split, ft_nbrword(s, c)));
	while (s[j] && s[j] != c)
	{
		word[k] = s[j];
		k++;
		j++;
	}
	word[k] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	char	**split;

	i = 0;
	k = 0;
	split = malloc(sizeof(char *) * (ft_nbrword(s, c) + 1));
	if (!split)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
			split[k++] = ft_word(s, c, i, split);
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	split[k] = NULL;
	return (split);
}
