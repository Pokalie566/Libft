/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeboose <adeboose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 07:18:27 by adeboose          #+#    #+#             */
/*   Updated: 2024/10/10 15:43:50 by adeboose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				count;
	int				check_find;
	unsigned char	*ptr;
	unsigned char	cha;
	unsigned char	*str;

	count = 0;
	cha = (unsigned char)c;
	str = (unsigned char *)s;
	check_find = 0;
	while (str[count])
	{
		if (s[count] == cha)
		{
			ptr = &str[count];
			check_find = 1;
		}
		count++;
	}
	if (str[count] == '\0' && cha == '\0')
		return (&((char *)str)[count]);
	if (count == 0 || check_find == 0)
		return (NULL);
	return ((char *)ptr);
}
