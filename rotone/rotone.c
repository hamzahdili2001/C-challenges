#include <unistd.h>

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

void	addone(char *c)
{
	if (*c == 'z' || *c == 'Z')
		*c -= 26;
	*c += 1;
}
int	main(int argc, char *argv[])
{
	char	*str;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	str = argv[1];
	while (*str)
	{
		if (ft_isalpha(*str))
			addone(str);
		write(1, str++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
