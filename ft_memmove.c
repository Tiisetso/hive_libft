/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:26:54 by timurray          #+#    #+#             */
/*   Updated: 2025/04/16 16:37:21 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *tdest;
	unsigned char *tsrc;

	tdest = (unsigned char *)dest;
	tsrc = (unsigned char *)src;

	if (dest <= src)
	{
		while (n-- > 0)
		{
			*tdest++ = *tsrc++;
		}
	}
	else if (dest > src)
	{
		tdest = tdest + (n - 1);
		tsrc = tsrc + (n - 1);
		while (n-- > 0)
		{
			*tdest-- = *tsrc--;
		}
	}
	return (dest);
}
