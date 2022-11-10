#include <stdio.h>
#include <ctype.h>

int ft_isalpha (int a)
{
	if ((a > 64 && a < 91) || (a > 96 && a < 123))
		return (1);
	return (0);
}


int	main()
{
	int i = -1;
	while (i++ < 100)
		printf("%d", isalpha(i));

	printf("\n");
	i = -1;
	while (i++ < 100)
		printf("%d", ft_isalpha(i));

	return 0;
}
