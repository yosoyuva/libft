/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:20:09 by ymehdi            #+#    #+#             */
/*   Updated: 2019/04/10 16:10:45 by ymehdi           ###   ########.fr       */
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

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_memchr(const void *s, int c, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_toupper(int c);

int		ft_tolower(int c);

void	*ft_memalloc(size_t size);

void	ft_memdel(void **ap);

char	*ft_strnew(size_t size);

void	ft_strdel(char **as);

void	ft_strclr(char *s);

void	ft_striter(char *s, void (*f)(char *));

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

char	*ft_strmap(char const *s, char (*f)(char));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int		ft_strequ(char const *s1, char const *s2);

int		 ft_strnequ(char const *s1, char const *s2, size_t n);

char	*ft_strsub(char const *s, unsigned int start, size_t len);

#endif
