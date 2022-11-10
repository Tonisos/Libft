/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testbzero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontalb <amontalb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:30:10 by amontalb          #+#    #+#             */
/*   Updated: 2022/11/09 08:07:10 by amontalb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char *p;

    p = s;
    while (n > 0)
    {
        *p = 0;
        p++;
        n--;
    }
}

#include <string.h>
#include <stdio.h>

int main () {
   char str[50];
   char str2[50];

   strcpy(str,"This is string.h library function");
   printf("Base : %s\n", str);
   bzero(str, 1);
   printf("Built-in : %s\n", &str[5]);
   
   strcpy(str2,"This is string.h library function");
   ft_bzero(str2, 10);
   printf("Ma fonction : %s", &str[5]);
   puts(str2);
   
   return(0);
}