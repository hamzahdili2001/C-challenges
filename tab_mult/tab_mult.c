#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}
void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + '0');
}

int	getint(char *str)
{
	int	result;

	result = 0;
	while (*str)
		result = result * 10 + (*str++ - '0');
	return (result);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	num;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	i = 1;
	num = getint(argv[1]);
	while (i <= 9)
	{
		ft_putnbr(i);
		ft_putstr(" x ");
		ft_putnbr(num);
		ft_putstr(" = ");
		ft_putnbr(i * num);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
