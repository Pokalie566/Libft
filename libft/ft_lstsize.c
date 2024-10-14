/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeboose <adeboose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:06:51 by adeboose          #+#    #+#             */
/*   Updated: 2024/10/10 15:43:34 by adeboose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*elem;

	len = 0;
	if (lst == NULL)
		return (len);
	elem = lst;
	while (elem != NULL)
	{
		elem = elem->next;
		len++;
	}
	return (len);
}
