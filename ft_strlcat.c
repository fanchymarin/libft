/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarin-p <fmarin-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:20:30 by fmarin-p          #+#    #+#             */
/*   Updated: 2022/03/24 18:08:30 by fmarin-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen2(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = ft_strlen2(dst);
	srclen = ft_strlen2(src);
	if (dstsize < dstlen)
		return (srclen + dstsize);
	while (src[i] && dstsize > (dstlen + 1))
	{
		dst[dstlen + i] = src[i];
		++i;
		--dstsize;
	}
	dst[dstlen + i] = 0;
	return (dstlen + srclen);
}
