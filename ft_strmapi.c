/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 19:43:36 by nguelfi           #+#    #+#             */
/*   Updated: 2017/04/13 20:19:18 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*map;

	i = 0;
	while (s[i])
		i++;
	if ((map = (char *)malloc(sizeof(char) * i)) == NULL)
		return (NULL);
	map[i] = 0;
	while (--i > 0)
		map[i] = f(i, s[i]);
	map[i] = f(i, s[i]);
	return (map);
}
