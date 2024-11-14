/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:43:00 by rubmedin          #+#    #+#             */
/*   Updated: 2024/11/10 23:57:08 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *s, int c, size_t n)
{
	int i;
	char *str;

	str = (char *)s;
	if (str == NULL || str[0] == '\0'|| c == 0 || n == 0)		
		return (str);
	i = 0;
	while (i < (int)n && str[i])
	{
		str[i] = (char)c;
		i++;
	}
	return (str);	
}
