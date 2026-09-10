#include <unistd.h>

char	find_str(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s2)
	{
		if (*s2 == s1[i])
			i++;
		if (s1[i] == '\0')
			return ('1');
		s2++;
	}
	return ('0');
}

int	main(int argc, char *argv[])
{
	char	res;
	char	*str1;
	char	*str2;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	str1 = argv[1];
	str2 = argv[2];
	res = find_str(str1, str2);
	write(1, &res, 1);
	write(1, "\n", 1);
	return (0);
}
