#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	char	*str;
	char	*end;
	int		prev_was_space;
	int		str_len;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	str = argv[1];
	str_len = ft_strlen(str);
	if (str_len == 0)
	{
		ft_putchar('\n');
		return (0);
	}
	end = str + str_len - 1;
	while (*str && is_space(*str))
		str++;
	while (end > str && is_space(*end))
		end--;
	prev_was_space = 0;
	while (str <= end)
	{
		if (!is_space(*str))
		{
			ft_putchar(*str);
			prev_was_space = 0;
		}
		else
		{
			if (!prev_was_space)
			{
				ft_putchar(' ');
				prev_was_space = 1;
			}
		}
		str++;
	}
	ft_putchar('\n');
	return (0);
}
