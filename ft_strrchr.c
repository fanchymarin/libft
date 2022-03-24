/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarin-p <fmarin-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:45:03 by fmarin-p          #+#    #+#             */
/*   Updated: 2022/03/24 16:36:15 by fmarin-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen(const char *str)
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

	strlen = ft_strlen(s);
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
