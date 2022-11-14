/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:34:02 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/14 11:10:49 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	a;

	a = (char) c;
	i = strlen(s);
	while (i > 0 && s[i] != a)
		i--;
	if (s[i] == a)
		return ((char *) &s[i]);
	return (NULL);
}
