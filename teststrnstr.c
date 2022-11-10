/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:40:42 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/09 17:08:11 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int	j;

	i = 0;
	if (!needle)
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i] && haystack[i++] == needle[j++] && i < len)
			;
		if (needle[j] == '\0')
			return ((char *)&haystack[i - j]);
	}
	return (0);
}

int main () {
   const char haystack[20] = "TutorialsPointtutu";
   const char needle[10] = "";
   char *ret;

   ret = strnstr(haystack, needle, 16);

   printf("The substring is: %s\n", ret);
   
   return(0);
}