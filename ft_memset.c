/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:01:44 by timurray          #+#    #+#             */
/*   Updated: 2025/04/16 16:12:52 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*mem;
	unsigned char	fill;

	mem = (unsigned char *)s;
	fill = (unsigned char)c;
	while (n > 0)
	{
		*mem++ = fill;
		n--;
	}
	return (s);
}
