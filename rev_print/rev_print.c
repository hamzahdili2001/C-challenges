#include <unistd.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

int	main(int argc, char *argv[])
{
	char	*start;
	char	*end;
	int		arglen;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	arglen = ft_strlen(argv[1]);
	start = argv[1];
	end = start + arglen - 1;
	while (start <= end)
		write(1, end--, 1);
	write(1, "\n", 1);
	return (0);
}
