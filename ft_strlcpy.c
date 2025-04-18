/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:11:35 by timurray          #+#    #+#             */
/*   Updated: 2025/04/18 12:27:40 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t count;

	count = 0;
	while (*(src + count))
		count++;
	if (count == 0)
		return (0);
	while ((*src) && (dstsize > 0))
	{
		*dst++ = *src++;
		dstsize--;
	}
	*dst = 0;
	return (count);
}

// // TODO remove
// #include <stdio.h>
// int main(void)
// {
// 	size_t dstsize = 20;
// 	char dst[dstsize];
// 	char *src = "Hey from here";

// 	ft_strlcpy(dst, src, dstsize);
// 	printf("%s\n", src);
// 	printf("%s\n", dst);
// 	return (0);
// }