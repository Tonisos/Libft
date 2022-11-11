/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemontalbetti <antoinemontalbetti@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:21:25 by antoinemont       #+#    #+#             */
/*   Updated: 2022/11/11 17:07:36 by antoinemont      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isinset(char s1, char const *set)
{
    int i;
    
    i = 0;
    while (set[i] != '\0')
    {
        if (s1 == set[i])
            return (1);
        i++;
    }
    return (0);
}

int ft_countstart(char const *s1, char const *set)
{
    int i;
    
    i = 0;
    while (ft_isinset(s1[i], set))
            i++;
    return (i);
}


int ft_countend(char const *s1, char const *set)
{
    int i;

    i = ft_strlen(s1) - 1;
    while (ft_isinset(s1[i], set))
        i--;
    return (i);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int count;
    int j;
    char *trim;

    j = 0;
    count = ft_strlen(s1) - ft_countstart(s1, set) - (ft_strlen(s1) - ft_countend(s1, set)) + 2;
    i = ft_countstart(s1, set);

    trim =(char *) malloc(sizeof(char) * count);
	if (!trim)
		return (NULL);
    while (i < ft_countend(s1, set) + 1)
    {
        trim[j] = s1[i];
        i++;
        j++;
    }
    trim[j] = '\0';
    return (trim);
}
