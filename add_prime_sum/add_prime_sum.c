#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		n = 147483648;
	}
	else if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int	is_prime(int n)
{
	int	i;

	if (n < 2)
		return (0);
	i = 2;
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	n;
	int	i;
	int	sum;

	if (argc != 2)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	n = atoi(argv[1]);
	if (n <= 1)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	i = 2;
	sum = 0;
	while (i <= n)
	{
		if (is_prime(i))
		{
			sum += i;
		}
		i++;
	}
	ft_putnbr(sum);
	ft_putchar('\n');
	return (0);
}
