/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmemmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:42:12 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/09 10:06:16 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)

{
	char	*i;
	char	*j;

	i = (char *)dst;
	j = (char *)src;
	if (j < i)
	{
		i += len - 1;
		j += len - 1;
		while (len > 0)
		{
			*i-- = *j--;
			len --;
		}
	}
	else
	{
		while (len > 0)
		{
			*i++ = *j++;
			len--;
		}
	}
	return (dst);
}

/*int	main()
{
	const char	src[50] = "http://www.tutorialspoint.com";
	char		dest[50];

	strcpy (dest, "Heloooo!!");
	printf("Before memcpy dest = %s\n", dest);
	ft_memmove(dest, src, strlen(src)+1);
	printf("After memcpy dest = %s\n", dest);
	return (0);
}
*/

int    main(void)
{
    char    src[] = "bonjour";
    char    dst[10];

    // memmove(dst, src, 10);
    // printf("%s\n", dst);
    memmove(dst, src, 10);
    printf("%s\n", dst);
    return (0);
} 