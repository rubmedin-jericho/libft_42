/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 01:41:00 by rubmedin          #+#    #+#             */
/*   Updated: 2024/11/11 02:04:29 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;
	char *str;
	char *dst;
	
	str = (char *)src;
	dst = (char *)dest;
	if(str[0] == '\0' || str == 0 || n == 0)
		return (dest);
	i = 0;
	while(i < (int)n && str[i])
	{
		dst[i] = str[i];
		i++;
	}	
	dst[i] = '\0';
	return (dest);
}
