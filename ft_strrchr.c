/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 11:57:19 by timurray          #+#    #+#             */
/*   Updated: 2025/05/02 12:21:30 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strrchr(const char *s, int c)
{
	unsigned int i;

	i = 0;
	while (*(s+i))
		i++;
	while(i > 0)
	{
		if (*(s + i) == c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

// #include <stdio.h>
// int main (void)
// {
//     int c = 'h';
//     const char *s = "1234h6789";
//     printf("%s\n", ft_strrchr(s,c));

//     return (0);
// }