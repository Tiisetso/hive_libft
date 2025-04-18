/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 12:29:27 by timurray          #+#    #+#             */
/*   Updated: 2025/04/18 12:54:35 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	length;

	length = ft_strlen(src);
	return (length);
}

#include <stdio.h>
int main (void)
{
	size_t dstsize = 10;
	char *src = "Hello";
	char dst[dstsize];
	size_t length;

	length = ft_strlcat(dst, src, dstsize);
	printf("%zu\n", length);

	return (0);
}