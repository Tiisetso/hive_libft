/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 12:59:45 by timurray          #+#    #+#             */
/*   Updated: 2025/05/05 12:17:40 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c);

int ft_atoi(const char *nptr)
{
	int sign;
	int n;
	int index;

	index = 0;
	sign = 1;
	n = 0;
	while (ft_isspace(*(nptr + index)))
		index++;
	if (*(nptr + index++)== '-')
		sign = -1;
	while (ft_isdigit(*(nptr + index)))
	{
		n = n * 10 + (*(nptr + index) - '0');
		index++;
	}
	return (n * sign);
}

static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || (c == 32))
		return (1);
	return (0);
}
