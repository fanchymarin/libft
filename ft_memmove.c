/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarin-p <fmarin-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:45:24 by fmarin-p          #+#    #+#             */
/*   Updated: 2022/03/24 16:24:34 by fmarin-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*p;

	p = dst;
	if (!dst && !src)
		return (0);
	if (dst < src)
	{
		while (len--)
			*(char *)dst++ = *(char *)src++;
	}
	else
	{
		while (len--)
			*((char *)dst + len) = *((char *)src + len);
	*(char *)dst = *(char *)src;
	}
	return (p);
}
