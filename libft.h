/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:20:09 by ymehdi            #+#    #+#             */
/*   Updated: 2019/04/06 20:22:45 by ymehdi           ###   ########.fr       */
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

#endif
