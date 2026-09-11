#include <unistd.h>

int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	is_alpha(char *str)
{
	if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		return (1);
	return (0);
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	first_word(int index, char *str)
{
	if (index == 0 || (index > 0 && is_space(str[index - 1])))
		return (1);
	return (0);
}
void	ft_capitalize(int index, char *str)
{
	char	c;

	c = str[index];
	if (is_alpha(&c))
	{
		if (first_word(index, str))
			ft_putchar(c -= 32 * (c >= 'a' && c <= 'z'));
		else
			ft_putchar(c += 32 * (c >= 'A' && c <= 'Z'));
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*str;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	str = argv[1];
	while (str[i])
	{
		if (is_alpha(&str[i]))
			ft_capitalize(i, str);
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
