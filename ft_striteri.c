/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeboose <adeboose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:28:58 by adeboose          #+#    #+#             */
/*   Updated: 2024/10/10 12:12:12 by adeboose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	size_t			len;

	i = 0;
	if (s)
	{
		len = ft_strlen(s);
		while (i < len)
		{
			f(i, &s[i]);
			i++;
		}
	}
}
