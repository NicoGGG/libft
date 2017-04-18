/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 20:20:19 by nguelfi           #+#    #+#             */
/*   Updated: 2017/04/18 14:52:56 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*trim;

	i = 0;
	while (s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = i;
	while (s[j])
		j++;
	j--;
	while (s[j] == ' ' || s[j] == ',' || s[j] == '\n' || s[j] == '\t')
		j--;
	k = j - i + 1;
	if ((trim = (char *)malloc(sizeof(char) * k)) == NULL)
		return (NULL);
	trim[k] = 0;
	while (--k >= 0)
	{
		trim[k] = s[j];
		j--;
	}
	return (trim);
}
