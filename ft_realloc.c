/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarin-p <fmarin-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 23:22:20 by fmarin-p          #+#    #+#             */
/*   Updated: 2023/10/14 23:39:53 by fmarin-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *p, size_t count, size_t size)
{
	void	*new_p;

	new_p = ft_calloc(count, size);
	if (!new_p)
		return (NULL);
	ft_memmove(new_p, p, count * size);
	free(p);
	return (new_p);
}
