#include "libft.h"


void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char *dest;

    if (b == NULL)
        return (NULL);
    dest = b;
    
    while (len > 0)
    {
        *dest = (unsigned char) c;
        dest ++;
        len --;
    }
    return (b);
}


#include <stdio.h>
#include <string.h>
  
/*int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);
  
    // Fill 8 characters starting from str[13] with '.'
    ft_memset(str + 13, '.', 8*sizeof(char));
  
    printf("After memset():  %s", str);
    return 0;
}*/
void printArray(int arr[], int n)
{
   for (int i=0; i<n; i++)
      printf("%d ", arr[i]);
}
int main()
{
    int n = 10;
    int arr[n];
  
    // Fill whole array with 100.
    memset(arr, 253, n*sizeof(arr[0]));
    printf("Array after memset()\n");
    printArray(arr, n);
  
    return 0;
}