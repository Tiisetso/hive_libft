/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:11:56 by timurray          #+#    #+#             */
/*   Updated: 2025/05/04 12:23:21 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strdup(const char *s)
{
	char *strdup;
	size_t	len;
	size_t	index;

	len = ft_strlen(s);	
	strdup = (char *)malloc(len * sizeof(char) + 1);
	if (strdup == NULL)
		return ((char *)NULL);
	while (*s)
		*strdup++ = *s++;
	*strdup = '\0';
	return (strdup);
}
