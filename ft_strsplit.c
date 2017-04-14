#include <stdlib.h>

static int		tab_lines(char const *s, char c)
{
	int			i;
	int			lines;

	i = 0;
	lines = 0;
	while (s[i] != '\0')
	{
		if (s[i] != 'c'
		{
			lines += 1;
			while (s[i] != 'c')
				++i;
		}
		else
			++i;
	}
	return (lines);
}

static char		*fill_tab(char const *s, char c)
{
	int			i;
	char		*copy;

	i = 0;
	copy = NULL;
	if (s == NULL)
		return (NULL);
	while (s[i] != 'c')
		i += 1;
	if ((copy = (char*)malloc(sizeof(copy) * (i + 1))) == NULL)
		return (NULL);
	copy[i] = '\0';
	while (--i >= 0)
		copy[i] = s[i];
	return (copy);
}

char			**ft_split_whitespaces(char const *s, char c)
{
	int			i;
	int			j;
	char		**tab;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	if ((tab = (char**)malloc(sizeof(*tab) * (tab_lines(s) + 1))) == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != 'c')
		{
			if ((tab[j++] = fill_tab(s + i, c)) == NULL)
				break ;
			while (s[i] != 'c')
				++i;
		}
		else
			++i;
	}
	tab[j] = NULL;
	return (tab);
}