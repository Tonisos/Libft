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
char *ft_word(char const *s, char c, int i)
{
	int	count;
	int	j;
	int	k;
	char *word;

	count = 0;
	j = i;
	k = 0;
	
	while(s[i] && s[i] != c)
	{
		i++;
		count++;
	}
	word = malloc ((count + 1) * sizeof(char));
	while (s[j] && s[j] != c )
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
	int	i;
	int	k;
	char **split;

	i = 0;
	k = 0;
	if (!(split = malloc(sizeof(char *) * (ft_nbrword(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
			split[k++] = ft_word(s, c, i);
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	split[k] = NULL;
	return (split);
}