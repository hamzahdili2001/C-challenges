#include <unistd.h>

int	ft_isapha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

void	print_count(char c)
{
	int	index;
	int	i;

	index = 0;
	i = 0;
	if (c >= 'a' && c <= 'z')
		index = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		index = c - 'A' + 1;
	while (i < index)
	{
		write(1, &c, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*ptr;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	ptr = argv[1];
	while (*ptr)
	{
		if (ft_isapha(*ptr))
			print_count(*ptr);
		else
			write(1, ptr, 1);
		ptr++;
	}
	write(1, "\n", 1);
	return (0);
}
