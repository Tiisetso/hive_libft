/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:40:13 by timurray          #+#    #+#             */
/*   Updated: 2025/04/16 12:09:03 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *temp_dest;
	unsigned char *temp_src;

	temp_dest = dest;
	temp_src = src;
	while (n > 0)
	{
		*temp_dest++ = *temp_src++;
		n--;
	}	
}