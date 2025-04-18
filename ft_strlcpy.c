/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:11:35 by timurray          #+#    #+#             */
/*   Updated: 2025/04/18 12:58:04 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t length;


	length = ft_strlen(src);
	if (length == 0)
		return (0);
	while ((*src) && (dstsize > 0))
	{
		*dst++ = *src++;
		dstsize--;
	}
	*dst = 0;
	return (length);
}

// TODO remove
#include <stdio.h>
int main(void)
{
	size_t dstsize = 0;
	char dst[dstsize];
	char *src = "Hey from high up here";
	size_t size;

	size = ft_strlcpy(dst, src, dstsize);
	printf("%s\n", src);
	printf("%s\n", dst);
	printf("%zu\n", size);
	return (0);
}