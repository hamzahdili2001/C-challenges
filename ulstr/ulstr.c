#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	reverse_case(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
	else if (*c >= 'a' && *c <= 'z')
		*c -= 32;
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
		reverse_case(str);
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
	return (0);
}
