/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:44:09 by timurray          #+#    #+#             */
/*   Updated: 2025/05/03 11:52:03 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned	int i;
	unsigned	int j;
	char		*location;

	i = 0;
	location = NULL;
	if (strlen(little) == 0)
		return (big);
	while ((*(big + i)) && (len-- > 0))
	{
		j = 0;
		if (*(big + i) == *(little + j))
		{
			while (*(big + i + j) == *(little + j))
				j++;
			if (*(little + j) == '\0')
			{
				location = big + i;
				break;
			}
		}
		i++;
	}
	return (location);
}
