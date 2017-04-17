/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 15:30:47 by nguelfi           #+#    #+#             */
/*   Updated: 2017/04/14 15:30:51 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				tab_lines(char const *s, int c)
{
	int			i;
	int			lines;

	i = 0;
	lines = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			lines++;
			while (s[i] != c && s[i] != 0)
				++i;
		}
		else
			++i;
	}
	return (lines);
}

char			*fill_tab(char const *s, char c)
{
	int			i;
	char		*copy;

	i = 0;
	copy = NULL;
	if (s == NULL)
		return (NULL);
	while (s[i] != c && s[i] != 0)
		i++;
	if ((copy = (char*)malloc(sizeof(copy) * (i + 1))) == NULL)
		return (NULL);
	copy[i] = '\0';
	while (--i >= 0)
		copy[i] = s[i];
	return (copy);
}

char			**ft_strsplit(char const *s, char c)
{
	int			i;
	int			j;
	char		**tab;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	if ((tab = (char**)malloc(sizeof(char*) * (tab_lines(s, c) + 1))) == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if ((tab[j++] = fill_tab(s + i, c)) == NULL)
				break ;
			while (s[i] != c && s[i] != 0)
				++i;
		}
		else
			++i;
	}
	tab[j] = NULL;
	return (tab);
}
