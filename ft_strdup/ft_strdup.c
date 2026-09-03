#include <stdlib.h>

size_t	ft_strlen(char *str)
{
	size_t	l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}
char	*ft_strdub(char *src)
{
	char	*ptr;
	size_t	size;
	size_t	i;

	size = ft_strlen(src) + 1;
	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
