/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 14:09:55 by timurray          #+#    #+#             */
/*   Updated: 2025/05/04 11:29:04 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"
#include "stdint.h"

void *calloc(size_t nmemb, size_t size)
{
	void *ptr;

	if ((nmemb == 0 || size == 0) || (nmemb > SIZE_MAX / size)) //TODO should return null pinter.
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	
	return (ptr);
}
