/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarin-p <fmarin-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:16:31 by fmarin-p          #+#    #+#             */
/*   Updated: 2022/03/24 16:21:52 by fmarin-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	neg;

	num = 0;
	neg = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	if (*str == 45 || *str == 43)
	{
		if (*str == 45)
			neg = -1;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		num = num * 10 + (*str - 48);
		++str;
	}
	return (num * neg);
}
