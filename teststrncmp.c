#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && (s1[i]==s2[i] ) && (n - 1 > i))
		i++;
	return (s1[i] - s2[i]);
}

int main() {
  char str1[] = "abcdefg", str2[] = "abCdefg";
  int result;


  result = ft_strncmp(str1, str2, 2);
  printf("strncmp(str1, str2) = %d\n", result);

  
  result = strncmp(str1, str2, 2);
  printf("strncmp(str1, str3) = %d\n", result);

  return 0;
}