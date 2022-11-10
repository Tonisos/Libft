#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	a;

	a = (char) c;
	i = 0;
	while (s[i] != '\0' && s[i] != a)
		i++;
	if (s[i] == a)
		return ((char *) &s[i]);
	return (NULL);
}

int	main () 
{
	const char	str[] = "This is just a String";
	const char	ch = 'u';
	char		*p;

	p = ft_strchr(str, ch);
	printf("String starting from %c is: %s", ch, p);
	return (0);
}
