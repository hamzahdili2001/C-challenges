#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	str = argv[1];
	while (*str && ft_isspace(*str))
		str++;
	while (*str && !ft_isspace(*str))
		ft_putchar(*(str++));
	ft_putchar('\n');
	return (0);
}
