#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t		i;
	const char	*ptr;

	i = 0;
	while (s[i])
	{
		ptr = reject;
		while (*ptr)
		{
			if (s[i] == *ptr)
				return (i);
			ptr++;
		}
		i++;
	}
	return (i);
}
