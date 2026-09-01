#include <unistd.h>

int	is_matched(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (*s2 && s1[i])
	{
		if (*s2 == s1[i])
			i++;
		s2++;
	}
	return (s1[i] == '\0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*(str++));
	}
}
int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;

	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	s1 = argv[1];
	s2 = argv[2];
	if (is_matched(s1, s2))
		ft_putstr(s1);
	ft_putchar('\n');
	return (0);
}
