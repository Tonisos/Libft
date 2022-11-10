/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teststrdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:24:12 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/10 12:39:14 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*s2;
	size_t		i;

	i = 0;
	s2 = malloc ((strlen(s1) + 1) * (sizeof(char)));
	if (!s2)
		return (NULL);
	while (i < strlen(s1))
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

int main()
{
    char source[] = "GeeksForGeeks";

    char* target = ft_strdup(source);
 
    printf("%s", target);
	printf("%d", target[13]);
    return 0;
}