#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *t1;
	char *t2;
	size_t	i;

	i = 0;
	t1 = (char *) s1;
	t2 = (char *) s2;
	while ((t1[i] == t2[i]) && i < n - 1)
		i++;
	return (t1[i] - t2[i]);
}

int main() {
  char str1[] = "salut\0t"; 
  char str2[] = "salut\0T";
  int result;


  result = memcmp(str1, str2, 7);
  printf("memcmp(str1, str2) = %d\n", result);

  
  result = ft_memcmp(str1, str2, 7);
  printf("ft_memcmp(str1, str3) = %d\n", result);

  return 0;
}