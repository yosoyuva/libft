/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:23:54 by ymehdi            #+#    #+#             */
/*   Updated: 2019/04/06 20:22:48 by ymehdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	argc = 0;
	argv[0] = "0";

	char str1[20];
	char str2[20];
	strcpy (str1,"ab");
	strcpy (str2,"");
	printf("le vrai :%s\n",strncat (str1, str2, 0));
	printf("le miens :%s\n",ft_strncat (str1, str2, 0));
	//printf("le vrai strlen :%lu\nle miens :%lu\n", strlen(argv[1]), ft_strlen(argv[1]));
	//ft_putstr();
	//ft_putchar(-56);
	//ft_putendl(argv[1]);
	//printf("le miens :%s\n", ft_strncat(str ,s2, 5));
	//printf("le vrai :%s\n",strncat(str, s2, 3));

	return 0;
}
