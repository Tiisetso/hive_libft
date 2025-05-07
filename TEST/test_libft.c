/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:09:18 by timurray          #+#    #+#             */
/*   Updated: 2025/05/07 16:43:14 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

void printresult(char *title, int error_count)
{
	if (error_count == 0)
		printf("%s: OK\n",title);
	else
		printf("%s: %d error(s)\n", title, error_count);
}

int	test_ft_isalpha(void)
{
	int	i;
	int	error_count = 0;

	for (i = 0; i <= 127; i++)
	{
		if (!!ft_isalpha(i) != !!isalpha(i))
		{
			printf("ft_isalpha(%d) != isalpha(%d)\n", i, i);
			error_count++;
		}
	}
	printresult("ft_isalpha", error_count);
	return (error_count);
}

int test_ft_atoi(void)
{
	int error_count = 0;
	const char *tests[] = {
		"0", "42", "-42", "+42", "0042", "  42", " \t\n\r\v\f42",
		"2147483647", "-2147483648", "9999999999", "-9999999999",
		"42abc", "abc42", "", "+-42", "--42", "++42", NULL
	};

	for (int i = 0; tests[i]; i++)
	{
		if (atoi(tests[i]) != ft_atoi(tests[i]))
		{
			printf("FAILED: ft_atoi(\"%s\") = %d, atoi = %d\n", tests[i], i, i);
			error_count++;
		}
	}
	printresult("ft_atoi", error_count);
	return error_count;
}

int	main(void)
{
	int error_count = 0;

	printf("Testing Libft.\n");
	error_count += test_ft_isalpha();
	error_count += test_ft_atoi();

	if (error_count == 0)
		printf("Your functions pass\n");
	else
		printf("Oh no %i test(s) failed\n", error_count);
	return (0);
}