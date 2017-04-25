/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 20:20:19 by nguelfi           #+#    #+#             */
/*   Updated: 2017/04/25 21:33:26 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*trim;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = i;
	while (s[j])
		j++;
	while ((s[j] == ' ' || s[j] == '\n' ||
			s[j] == 0 || s[j] == '\t') && s[i])
		j--;
	k = j - i;
	if (!(trim = ft_memalloc(k + 2)))
		return (NULL);
	trim[k++] = 0;
	while (--k >= 0)
	{
		trim[k] = s[j];
		j--;
	}
	return (trim);
}
