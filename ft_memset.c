/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:01:44 by timurray          #+#    #+#             */
/*   Updated: 2025/04/16 11:16:34 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*memset(void *s, int c, size_t n)
{
	unsigned char	*mem;
	unsigned char	fill;

	mem = (unsigned char)s;
	fill = (unsigned char)c;
	while (n > 0)
	{
		mem = fill;
		*mem++;
		n--;
	}
	return (s);
}

#include <stdio.h>
#include <string.h>

int main () 
{
   char str[50];

   strcpy(str, "Welcome to Tutorials point");
   puts(str);

   memset(str, '#', 7);
   puts(str);
   
   return(0);
}