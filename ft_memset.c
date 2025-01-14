/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:43:00 by rubmedin          #+#    #+#             */
/*   Updated: 2025/01/10 19:30:47 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < (int)n)
	{
		str[i] = (char)c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char str[1024];
	char str2[1024];

	ft_memset(str, '\n', 6);
	memset(str2, '\n', 6);
	printf("str: %sstr2: %s\n", str, str2);
	return (0);
}
*/
