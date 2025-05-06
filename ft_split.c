/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 15:47:59 by timurray          #+#    #+#             */
/*   Updated: 2025/05/06 11:33:46 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strcount(char *s, char c);
static void		free_splitstr(char **splitstr, size_t i);
static char		*get_word(const char *start, size_t length);

char	**ft_split(char const *s, char c)
{
	char		**splitstr;
	const char	*str_start;
	size_t		i;
	size_t		str_length;

	if (!s)
		return (NULL);
	splitstr = (char **)malloc(((ft_strcount((char *)s, c)) + 1)
			* sizeof(char *));
	if (!splitstr)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			str_start = s;
			str_length = 0;
			while (*s && *s != c)
			{
				s++;
				str_length++;
			}
			splitstr[i] = get_word(str_start, str_length);
			if (!splitstr[i++])
			{
				free_splitstr(splitstr, i - 1);
				return (NULL);
			}
		}
		else
			s++;
	}
	splitstr[i] = '\0';
	return (splitstr);
}

static char	*get_word(const char *start, size_t length)
{
	char	*word;
	size_t	i;

	word = (char *)malloc(length + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < length)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_splitstr(char **splitstr, size_t i)
{
	while (i--)
		free(splitstr[i]);
	free(splitstr);
}

static size_t	ft_strcount(char *s, char c)
{
	size_t	count;
	int		word_status;

	count = 0;
	word_status = 0;
	while (*s)
	{
		if (*s != c && !word_status)
		{
			word_status = 1;
			count++;
		}
		else if (*s == c)
			word_status = 0;
		s++;
	}
	return (count);
}
