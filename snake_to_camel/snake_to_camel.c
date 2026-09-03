#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
		if (*str == '_')
		{
			str++;
			*str -= 32;
		}
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
	return (0);
}
