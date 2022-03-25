/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarin-p <fmarin-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:05:15 by fmarin-p          #+#    #+#             */
/*   Updated: 2022/03/25 15:57:11 by fmarin-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_left(char const *s1, char const *set)
{
	int		i;
	int		i2;

	i = 0;
	while (s1[i])
	{
		i2 = 0;
		while (set[i2] != s1[i] && set[i2])
			++i2;
		if (!set[i2])
			break;
		++i;
	}
	return (i);
}

static int	ft_right(char const *s1, char const *set)
{
	int		i;
	int		i2;

	i = ft_strlen((char *)s1) - 1;
	while (i)
	{
		i2 = 0;
		while (set[i2] != s1[i] && set[i2])
			++i2;
		if (!set[i2])
			break;
		--i;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	char	*pp;
	int		i;
	int		count;

	i = ft_left(s1, set);
	if (i == (int)ft_strlen((char *)s1))
		return (p = (char *) malloc(sizeof(char)));
	count = ft_right(s1, set) - i + 1;
	p = (char *) malloc(sizeof(char) * count + 1);
	if (!p)
		return (p);
	pp = p;
	while (count--)
		*(pp++) = s1[i++];
	*pp = 0;
	return (p);
}
