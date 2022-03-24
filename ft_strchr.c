/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarin-p <fmarin-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:31:20 by fmarin-p          #+#    #+#             */
/*   Updated: 2022/03/24 16:24:50 by fmarin-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;

	while (*s)
	{
		if (*s == c)
		{
			p = (char *)s;
			return (p);
		}
		s++;
	}
	if (c == 0)
	{
		p = (char *)s;
		return (p);
	}
	return (0);
}
