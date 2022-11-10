#include "libft.h"


void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *i;
    unsigned char *j;

    i = (unsigned char *)dst;
    j = (unsigned char *)src;

    while (n > 0)
    {
        *i = *j;
        i++;
        j++;
        n--;
    }
    return (dst);
}



int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}