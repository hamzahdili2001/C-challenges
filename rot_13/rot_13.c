#include <unistd.h>

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	ft_isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
void	rot13(char *c)
{
	if (ft_islower(*c))
	{
		*c += 13;
		if (*c > 'z')
			*c -= 26;
	}
	else if (ft_isupper(*c))
	{
		*c += 13;
		if (*c > 'Z')
			*c -= 26;
	}
}
*/
void	rot13(char *c)
{
	if (ft_islower(*c))
		*c = (*c - 'a' + 13) % 26 + 'a';
	else if (ft_isupper(*c))
		*c = (*c - 'A' + 13) % 26 + 'A';
}

int	main(int argc, char *argv[])
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
		if (ft_isalpha(*str))
			rot13(str);
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
	return (0);
}
