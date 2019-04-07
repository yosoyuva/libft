/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:20:09 by ymehdi            #+#    #+#             */
/*   Updated: 2019/04/07 19:17:32 by ymehdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <unistd.h>

#include <stdlib.h>

#include <string.h>

void	ft_putchar(char c);

void	ft_putstr(const char *s);

size_t	ft_strlen(const char *s);

void	ft_putendl(char const *s);

void	ft_putnbr(int n);

int		ft_strcmp(const char *s1, const char *s2);

int		ft_atoi(const char *str);

char	*ft_strdup(const char *s1);

char	*ft_strcpy(char *dst, const char *src);

char	*ft_strncpy(char *dst, const char *src, size_t len);

char	*ft_strcat(char *restrict s1, const char *restrict s2);

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size);

char	*ft_strstr(const char *haystack, const char *needle);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char const *s, int fd);

void	ft_putnbr_fd(int n, int fd);

void	ft_putendl_fd(char const *s, int fd);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);
#endif
