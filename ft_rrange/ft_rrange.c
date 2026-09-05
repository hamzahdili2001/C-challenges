#include <stdio.h>
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*arr;
	int	i;

	if (end < start)
		return (NULL);
	arr = malloc(sizeof(int) * (end - start + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (end >= start)
	{
		arr[i] = end;
		end--;
		i++;
	}
	return (arr);
}
