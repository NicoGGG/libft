/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 20:20:19 by nguelfi           #+#    #+#             */
/*   Updated: 2017/04/13 20:35:12 by nguelfi          ###   ########.fr       */
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
	j = 0;
	while (s[j])
		j++;
	while (s[j] == ' ' || s[j] == ',' ||
			s[j] == '\n' || s[j] == '\t' || s[j] == 0)
		j--;
	k = j - i + 1;
	if ((trim = (char *)malloc(sizeof(char) * j)) == NULL)
		return (NULL);
	trim[k] = 0;
	while (j >= i)
	{
		trim[k] = s[j];
		k++;
		j--;
	}
	return (trim);
}
