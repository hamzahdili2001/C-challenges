int	max(int *tab, unsigned int len)
{
	int				result;
	unsigned int	i;

	if (len == 0)
		return (0);
	result = tab[0];
	i = 0;
	while (i < len)
	{
		if (tab[i] > result)
			result = tab[i];
		i++;
	}
	return (result);
}
