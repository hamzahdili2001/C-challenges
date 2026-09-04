#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_union(char *s1, char *s2)
{
	unsigned char	printed[225] = {0};
	unsigned char	c;

	while (*s1)
	{
		c = *s1;
		if (printed[c] == 0)
		{
			ft_putchar(*s1);
			printed[c] = 1;
		}
		s1++;
	}
	while (*s2)
	{
		c = *s2;
		if (printed[c] == 0)
		{
			ft_putchar(*s2);
			printed[c] = 1;
		}
		s2++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_union(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
