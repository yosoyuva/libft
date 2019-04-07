/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:23:54 by ymehdi            #+#    #+#             */
/*   Updated: 2019/04/07 19:19:01 by ymehdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	argc = 0;
	argv[0] = "0";

	//char str1[10];
	char str2[10];
	strncmp ("bc","ab", 1);
	strcpy (str2,"123456789");
	//printf("le vrai :%s\n", strncat(str1, str2, 15));
	//printf("le miens :%s\n",ft_strncat(str1, str2, 15));
	printf("le vrai strncmp :%s\nle miens :%s\n", strrchr(argv[1], atoi(argv[2])), ft_strrchr(argv[1], atoi(argv[2])));
	//ft_putstr();
	//ft_putchar(-56);
	//ft_putendl(argv[1]);
	//printf("le miens :%s\n", ft_strncat(str ,s2, 5));
	//printf("le vrai :%s\n",strncat(str, s2, 3));

	return 0;
}
