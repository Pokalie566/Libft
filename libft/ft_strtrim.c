/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeboose <adeboose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:26:15 by adeboose          #+#    #+#             */
/*   Updated: 2024/10/10 15:43:52 by adeboose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_test_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	s1_len;
	char	*str;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (ft_test_set(s1[i], set))
		s1++;
	s1_len = ft_strlen(s1);
	while (s1_len > 0 && ft_test_set(s1[s1_len - 1], set))
		s1_len--;
	str = ft_calloc(s1_len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s1, s1_len);
	return (str);
}
