#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

char	*skip_spaces(char *str)
{
	while (*str && is_space(*str))
		str++;
	return (str);
}

int	main(int argc, char *argv[])
{
	char	*str;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	str = skip_spaces(argv[1]);
	while (*str)
	{
		if (is_space(*str))
		{
			str = skip_spaces(str);
			if (*str)
				ft_putchar(' ');
		}
		else
		{
			ft_putchar(*str);
			str++;
		}
	}
	ft_putchar('\n');
	return (0);
}
