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

int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}
int	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
void	to_upper(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

void	to_lower(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
}

void	capitalize_word(char *str, int i, int len)
{
	int	is_boundary;

	is_boundary = (i == len - 1 || is_space(str[i + 1]));
	if (is_alpha(str[i]))
	{
		if (is_boundary)
			to_upper(&str[i]);
		else
			to_lower(&str[i]);
	}
}

void	print_capitalized(char *str)
{
	int	len;
	int	i;

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		capitalize_word(str, i, len);
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc == 1)
	{
		ft_putchar('\n');
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		print_capitalized(argv[i]);
		i++;
	}
	return (0);
}
