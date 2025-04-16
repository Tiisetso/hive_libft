/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:09:18 by timurray          #+#    #+#             */
/*   Updated: 2025/04/16 11:09:45 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

int	test_ft_isalpha(void)
{
	int	error_count;

	error_count = 0;
	return (error_count);
}

int	main(void)
{
	int error_count = 0;

	printf("Testing Libft.\n");
	error_count += test_ft_isalpha();

	if (error_count == 0)
		printf("Your functions pass");
	else
		printf("Oh no %i test(s) failed\n", error_count);
	return (0);
}