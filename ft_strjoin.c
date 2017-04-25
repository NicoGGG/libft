/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 20:07:05 by nguelfi           #+#    #+#             */
/*   Updated: 2017/04/25 20:16:09 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*join;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if ((join = malloc(sizeof(char) * (i + j) + 1)) == NULL)
		return (NULL);
	join[i + j] = 0;
	while (--i >= 0)
	{
		while (--j >= 0)
			join[i + j + 1] = s2[j];
		join[i] = s1[i];
	}
	return (join);
}
