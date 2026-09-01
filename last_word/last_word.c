#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	char	*base;
	char	*end;
	char	*start;
	int		base_len;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	base = argv[1];
	base_len = ft_strlen(base);
	if (base_len == 0)
	{
		ft_putchar('\n');
		return (0);
	}
	start = (base + base_len) - 1;
	while (start > base && ft_isspace(*start))
		start--;
	end = start;
	while (start > base && !ft_isspace(*start))
		start--;
	if (ft_isspace(*start))
		start++;
	while (start <= end)
		ft_putchar(*(start++));
	ft_putchar('\n');
	return (0);
}
