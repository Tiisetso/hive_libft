/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 15:44:09 by timurray          #+#    #+#             */
/*   Updated: 2025/05/02 18:24:07 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while ((*(big + i)) && (len > 0))
	{
		j = 0;
		if (*(big + i) == *(little + j))
		{
			while (*(big + i + j) == *(little + j))
				j++;
			if 
		}		
	}
}