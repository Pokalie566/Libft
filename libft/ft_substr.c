/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeboose <adeboose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:52:28 by adeboose          #+#    #+#             */
/*   Updated: 2024/10/10 12:12:47 by adeboose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	str_len;

	if (!s)
		return (0);
	str_len = 0;
	while (start < ft_strlen(s) && (str_len < len && s[start + str_len]))
		str_len++;
	str = malloc(sizeof(char) * (str_len + 1));
	if (!str)
		return (0);
	i = 0;
	while (start < ft_strlen(s) && i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
