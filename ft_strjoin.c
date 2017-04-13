/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 20:07:05 by nguelfi           #+#    #+#             */
/*   Updated: 2017/04/13 20:20:10 by nguelfi          ###   ########.fr       */
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
	while (--i >= 0)
	{
		while (j >= 0)
		{
			join[i + j] = s2[j];
			j--;
		}
		join[i] = s1[i];
	}
	return (join);
}
