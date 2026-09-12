#include <stdio.h>
#include <stdlib.h>

int	intlen(int nbr)
{
	int	len;

	if (nbr == 0)
		return (1);
	len = 0;
	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int		len;
	int		i;
	char	*res;

	len = intlen(nbr);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	i = len - 1;
	if (nbr < 0)
	{
		nbr = -nbr;
		res[0] = '-';
	}
	else if (nbr == 0)
	{
		res[0] = '0';
	}
	while (nbr > 0)
	{
		res[i] = (nbr % 10) + '0';
		nbr /= 10;
		i--;
	}
	return (res);
}
