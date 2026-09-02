#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	mirror(char *c)
{
	int	index;

	if (*c >= 'a' && *c <= 'z')
	{
		index = *c - 'a';
		*c = 'z' - index;
	}
	else if (*c >= 'A' && *c <= 'Z')
	{
		index = *c - 'A';
		*c = 'Z' - index;
	}
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
	while (*str)
	{
		mirror(str);
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
	return (0);
}
