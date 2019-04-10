/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:19:29 by ymehdi            #+#    #+#             */
/*   Updated: 2019/04/09 18:21:08 by ymehdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] == c)
			return ((unsigned char *)&s[i]);
		i++;
	}
	if (c == 0)
		return ((unsigned char *)&s[i]);
	return (NULL);
}
