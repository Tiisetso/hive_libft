/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 12:25:24 by timurray          #+#    #+#             */
/*   Updated: 2025/05/05 17:37:06 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	// size_t	substr_len;
	char	*substr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (NULL);

	if (len == 0)
		return (NULL);
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	s_len = ft_strlcpy(substr, (s + start), len + 1);
	if (s_len == 0)
		return (NULL);
	return (substr);
}
