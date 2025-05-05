/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:44:09 by timurray          #+#    #+#             */
/*   Updated: 2025/05/05 12:20:05 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned	int i;
	unsigned	int j;
	char		*location;

	i = 0;
	location = NULL;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while ((*(big + i)) && (len-- > 0))
	{
		j = 0;
		if (*(big + i) == *(little + j))
		{
			while (*(big + i + j) == *(little + j))
				j++;
			if (*(little + j) == '\0')
			{
				location = (char *)big + i;
				break;
			}
		}
		i++;
	}
	return (location);
}
