#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
// does pass the tests so this is enough.
int	mini_atoi(char *str)
{
	int	result;

	result = 0;
	while (*str)
		result = result * 10 + (*str++ - '0');
	return (result);
}

void	ft_puthex(int n)
{
	char	hex[] = "0123456789abcdef";

	if (n < 0)
		return ;
	if (n >= 16)
		ft_puthex(n / 16);
	ft_putchar(hex[n % 16]);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_puthex(mini_atoi(argv[1]));
	ft_putchar('\n');
	return (0);
}
