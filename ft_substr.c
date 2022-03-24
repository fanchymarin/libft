/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarin-p <fmarin-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:17:33 by fmarin-p          #+#    #+#             */
/*   Updated: 2022/03/24 16:36:25 by fmarin-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	int		i;
	int		slen;

	slen = ft_strlen(s);
	if (len < slen)
		p = (char *) malloc(sizeof(char) * len + 1);
	else
		p = (char *) malloc(sizeof(char) * (slen - start) + 1);
	if (!p)
		return (0);
	i = 0;
	while (s[start] && len)
	{
		p[i] = s[start];
		start++;
		i++;
		len--;
	}
	p[i] = 0;
	return (p);
}