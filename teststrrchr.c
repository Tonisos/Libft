#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	a;

	a = (char) c;
	i = strlen(s) - 1;
	while (i >= 0 && s[i] != a)
		i--;
	if (s[i] == a)
		return ((char *) &s[i]);
	return (NULL);
}


int	main () 
{
	const char	str[] = "This is just a Sturing";
	const char	ch = 'u';
	char		*p;

	p = ft_strrchr(str, ch);
	printf("String starting from %c is: %s", ch, p);
	return (0);
}
