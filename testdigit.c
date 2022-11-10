#include <stdio.h>
#include <ctype.h>

int ft_isdigit (int a)
{
	if (a > 47 && a < 58)
		return (1);
	return (0);
}

int	main()
{
	int i = -1;
	while (i++ < 100)
		printf("%d", isdigit(i));

	printf("\n");
	i = -1;
	while (i++ < 100)
		printf("%d", ft_isdigit(i));

	return 0;
}
