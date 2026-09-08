char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
int	position(char c, int base)
{
	int		i;
	char	base_str[] = "0123456789abcdef";

	i = 0;
	while (i < base)
	{
		if (ft_tolower(c) == base_str[i])
			return (i);
		i++;
	}
	return (-1);
}
int	ft_atoi_base(const char *str, int str_base)
{
	int	result;
	int	sign;
	int	pos;

	if (str_base >= 17)
		return (0);
	sign = 1;
	result = 0;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str)
	{
		pos = position(*str, str_base);
		if (pos == -1)
			return (result * sign);
		result = result * str_base + pos;
		str++;
	}
	return (result * sign);
}
