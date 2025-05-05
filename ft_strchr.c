/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 10:19:34 by timurray          #+#    #+#             */
/*   Updated: 2025/05/04 12:35:49 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c == '\0' && *s == c)
		return ((char *)s);
	return (NULL);
}

// #include <stdio.h>
// int main (void)
// {
// 	int c = 'h';
// 	const char *s = "1234h6789";
// 	printf("%s\n", ft_strchr(s,c));

// 	return (0);
// }