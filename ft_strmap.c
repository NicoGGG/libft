/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 19:39:53 by nguelfi           #+#    #+#             */
/*   Updated: 2017/04/18 16:50:38 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*map;

	i = 0;
	while (s[i])
		i++;
	if ((map = (char *)malloc(sizeof(char) * i + 1)) == NULL)
		return (NULL);
	map[i] = 0;
	while (--i >= 0)
		map[i] = f(s[i]);
	return (map);
}
