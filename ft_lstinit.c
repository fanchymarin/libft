/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarin-p <fmarin-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 02:33:05 by fmarin-p          #+#    #+#             */
/*   Updated: 2023/10/21 02:36:47 by fmarin-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	**ft_lstinit(void)
{
	t_list	**head;

	head = ft_calloc(1, sizeof(t_list *));
	if (!head)
		return (NULL);
	*head = ft_lstnew(NULL);
	if (!*head)
		return (free(head), NULL);
	return (head);
}
