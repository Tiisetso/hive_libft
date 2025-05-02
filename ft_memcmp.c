/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:00:13 by timurray          #+#    #+#             */
/*   Updated: 2025/05/02 15:42:20 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s1temp;
	unsigned char *s2temp;
	int result;

	if (n == 0)
		return (0);
	result = 0;
	s1temp = (unsigned char *)s1;
	s2temp = (unsigned char *)s2;

	while ((*s1temp || *s2temp) && (n > 0))
	{
		result = *s1temp++ - *s2temp++;
		if (result != 0)
			return (result);
		n--;
	}
	return (result);
}
