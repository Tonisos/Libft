#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int a)
{
	if (a >= 0  && a <= 127)
		return (1);
	return (0);
}
int	main()
{
	int i = -1;
	while (i++ < 190)
		printf("%d", isascii(i));

	printf("\n");
	i = -1;
	while (i++ < 190)
		printf("%d", ft_isascii(i));

	return 0;
}
