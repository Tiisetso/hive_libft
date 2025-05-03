/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 12:29:27 by timurray          #+#    #+#             */
/*   Updated: 2025/05/03 12:27:49 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		src_length;
	int		dst_length;
	int		src_index;
	size_t	dst_offset;

	src_length = ft_strlen(src);
	dst_length = ft_strlen(dst);
	dst_offset = dst_length;
	src_index = 0;
	while (*(src + src_index) && (dst_offset < dstsize))
		*(dst + dst_offset++) = *(src + src_index++);
	*(dst + dst_offset) = '\0';
	return (src_length + dst_length);
}
