/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 14:26:17 by ymehdi            #+#    #+#             */
/*   Updated: 2019/04/11 15:25:14 by ymehdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iswspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && ft_iswspace(s[i]))
		i += 1;
	j = ft_strlen(&s[i]) - 1;
	while (s[i] && ft_iswspace(s[j + i]))
		j -= 1;
	if (!(str = ft_strnew(j + 1)))
		return (NULL);
	ft_strncpy(str, (s + i), (j + 1));
	return (str);
}
