/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 13:15:33 by timurray          #+#    #+#             */
/*   Updated: 2025/05/04 12:32:11 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*stemp;

	stemp = (unsigned char *)s;
	while (n > 0)
	{
		if (*stemp == c)
			return ((void *)stemp);
		stemp++;
		n--;
	}
	return (NULL);
}

// #include <stdio.h>
// int main (void)
// {
// 	const char *s = "hello";
// 	int c = 'l';
// 	size_t n = 4;

// 	printf("%p\n", ft_memchr((void *)s,c,n));
// 	return (0);
// }