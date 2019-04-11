/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 20:10:27 by ymehdi            #+#    #+#             */
/*   Updated: 2019/04/11 20:39:42 by ymehdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nlength(int n)
{
	int	size;

	size = 0;
	while (n)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*s;

	if (!(s = (char *)malloc(sizeof(char) * (ft_nlength(n) + 2))))
		return (NULL);
	i = ft_nlength(n);
	if (n < 0)
		s[0] = '+';
	s[i + 1] = '\0';
	while (i > 0)
	{
		s[i] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	return (s);
}