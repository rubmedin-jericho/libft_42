/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:24:49 by rubmedin          #+#    #+#             */
/*   Updated: 2025/01/10 19:10:39 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*src_tmp;
	char	*dest_tmp;
	size_t	lenght;
	size_t	i;

	src_tmp = (char *)src;
	dest_tmp = (char *)dest;
	lenght = n;
	i = 0;
	if (dest_tmp > src_tmp)
	{
		while (lenght-- > 0)
			dest_tmp[lenght] = src_tmp[lenght];
	}
	else
	{
		while (i < n)
		{
			dest_tmp[i] = src_tmp[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	char	s[];
	char	s0[];
	int		i;

	s[] = {65, 66, 67, 68, 69, 0, 45};
	s0[] = {0, 0, 0, 0, 0, 0, 0};
	//char	str[1024];
	(void)argc;
	(void)argv;
	ft_memmove(s0, s, 7);
	i = 0;
	while (i < 7)
	{
		printf("s0[%i]: %i\n", i, s0[i]);
		i++;
	}
	if (!memcmp(s, s0, 7))
		printf("SON IGUALES\n");
	//(void)argc;
	//ft_memmove(str, argv[1], atoi(argv[2]));
	//printf("str: %s\n", str);
	return (0);
}
*/
