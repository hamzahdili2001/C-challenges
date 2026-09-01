#include <unistd.h>

char	ft_findchar(const char *str, char c)
{
	static int	returned[256];

	if (returned[(unsigned char)c])
		return ('\0');
	while (*str)
	{
		if (*str == c)
		{
			returned[(unsigned char)c] = 1;
			return (c);
		}
		str++;
	}
	return ('\0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
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
	while (*s1)
	{
		if (ft_findchar(s2, *s1) != '\0')
			ft_putchar(*s1);
		s1++;
	}
	ft_putchar('\n');
	return (0);
}
