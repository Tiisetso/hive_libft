/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timurray <timurray@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:48:26 by timurray          #+#    #+#             */
/*   Updated: 2025/04/18 12:58:24 by timurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

extern int		ft_isalnum(int c);
extern int		ft_isalpha(int c);
extern int		ft_isascii(int c);
extern int		ft_isdigit(int c);
extern int		ft_isprint(int c);
extern int		ft_toupper(int c);
extern int		ft_tolower(int c);
extern size_t	ft_strlen(const char *s);
extern size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
extern void	*ft_memset(void *s, int c, size_t n);
extern void	*ft_memcpy(void *dest, const void *src, size_t n);
extern void	*ft_memmove(void *dest, const void *src, size_t n);
extern void	ft_bzero(void *s, size_t n);

#endif