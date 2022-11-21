/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:45:37 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/21 08:31:01 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrword(char const *s, char c)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (s[i])
	{
		if (s[i] != c)
			nbr ++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (nbr);
}

static char	**ft_free(char **split, int lign)
{
	int	i;

	i = 0;
	while (i <= lign)
	{
		free(split[i]);
		i++;
	}
	free (split);
	return (NULL);
}

static char	*ft_word(char const *s, char c, int i)
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
	word = (char *) malloc ((count + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (s[j] && s[j] != c)
	{
		word[k] = s[j];
		k++;
		j++;
	}
	word[k] = '\0';
	return (word);
}

char	**write_split(char **split, char const *s, char c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			split[k] = ft_word(s, c, i);
			if (!split[k])
				return (ft_free(split, k));
			k++;
		}
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	split[k] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = (char **) malloc(sizeof(char *) * (ft_nbrword(s, c) + 1));
	if (!split)
		return (NULL);
	return (write_split(split, s, c));
}
