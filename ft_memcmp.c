/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarin-p <fmarin-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:07:34 by fmarin-p          #+#    #+#             */
/*   Updated: 2022/03/24 16:23:40 by fmarin-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	while (*(char *)str1 == *(char *)str2 && n)
	{
		str1++;
		str2++;
		--n;
	}
	return (*(char *)str1 - *(char *)str2);
}
