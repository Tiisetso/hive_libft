/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:11:35 by timurray          #+#    #+#             */
/*   Updated: 2025/05/04 13:50:41 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	length;

	length = ft_strlen(src);
	if (length == 0)
		return (0);
	while ((*src) && (dstsize > 0))
	{
		*dst++ = *src++;
		dstsize--;
	}
	*dst = '\0';
	return (length);
}
