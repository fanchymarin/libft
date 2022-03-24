/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarin-p <fmarin-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:45:03 by fmarin-p          #+#    #+#             */
/*   Updated: 2022/03/24 18:08:51 by fmarin-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen2(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int		strlen;
	char	*p;

	strlen = ft_strlen2(s);
	s = &s[strlen];
	while (strlen)
	{
		if (*s == c)
		{
			p = (char *)s;
			return (p);
		}
		strlen--;
		s--;
	}
	return (0);
}
