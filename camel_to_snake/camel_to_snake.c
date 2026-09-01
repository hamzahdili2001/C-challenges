#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isupperalpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		if (c >= 'A' && c <= 'Z')
			return (1);
	}
	return (0);
}

void	ft_tolower(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
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
		if (ft_isupperalpha(*str))
		{
			ft_putchar('_');
		}
		ft_tolower(str);
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
	return (0);
}
