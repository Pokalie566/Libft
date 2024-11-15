/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeboose <adeboose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 05:54:29 by adeboose          #+#    #+#             */
/*   Updated: 2024/10/10 15:43:37 by adeboose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*csrc;
	char	*cdest;

	if (!dest && !src)
		return (NULL);
	cdest = (char *)dest;
	csrc = (char *)src;
	if (dest <= src)
	{
		while (n--)
			*cdest++ = *csrc++;
	}
	else if (dest > src)
	{
		cdest += n - 1;
		csrc += n - 1;
		while (n--)
		{
			*cdest-- = *csrc--;
		}
	}
	return (dest);
}
