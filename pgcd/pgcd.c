#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	pgcd(int a, int b)
{
	if (b == 0)
		return (a);
	return (pgcd(b, a % b));
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

int	main(int argc, char *argv[])
{
	int	a;
	int	b;

	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	ft_putnbr(pgcd(a, b));
	ft_putchar('\n');
	return (0);
}
