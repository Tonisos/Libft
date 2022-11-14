#include "libft.h"

int	ft_sizechar(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		return ('0');
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	while (n >= 1)
	{
		n /= 10;
		size ++;
	}
	return (size);

}


char *ft_itoa(int n)
{

	char			*str;
	unsigned int	i; 

	i = ft_sizechar(n) - 1;
	if (!(str = malloc(sizeof(char) * (ft_sizechar(n) + 1))))
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n =  n * -1;
	}
	str[ft_sizechar(n)] = '\0';
	while (n >= 1)
	{
		str[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	return (str);
}

int main()
{
	printf("%s", ft_itoa(-2147483648));
	return 0;
}