#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;

    i = 0;
    while (i < dstsize && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}

int main()
{
    char tab[] = "Salut c'est cool";
    char src[] = "coc";

    ft_strlcpy(tab, src, 3);
    printf("%s", tab);
    return 0;

}