/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 14:24:58 by timurray          #+#    #+#             */
/*   Updated: 2025/05/05 13:29:39 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		isset(char c, char *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	trim_start;
	size_t	trim_end;
	size_t	trim_size;
	char	*s;

	if (!s1 || !set)
		return (NULL);
	trim_start = 0;
	trim_end = ft_strlen(s1) - 1;
	while (isset(*(s1 + trim_start), (char *)set))
		trim_start++;
	while ((isset(*(s1 + trim_end), (char *)set)) && trim_end > 0)
		trim_end--;
	trim_size = trim_end - trim_start;
	if (trim_size <= 0)
		return (NULL);
	s = (char *)malloc((trim_size) * sizeof(char) + 1);
	if (!s)
		return (NULL);
	ft_memcpy(s, (s1 + trim_start), trim_size);
	*(s + trim_size) = '\0';
	return (s);
}

int	isset(char c, char *set)
{
	char	*check_set;

	check_set = set;
	while (*check_set)
	{
		if (c == *check_set)
			return (1);
		check_set++;
	}
	return (0);
}
