/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:08:31 by rubmedin          #+#    #+#             */
/*   Updated: 2025/01/13 19:37:48 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	len;
	size_t	i;

	str = (char *)s;
	len = ft_strlen(str);
	i = 0;
	while (len > i)
	{
		if (str[len] == c)
			return (&str[len]);
		len--;
	}
	if (str[len] == c && c == '\0')
		return (&str[len]);
	else if (str[len] == c)
		return (&str[len]);
	return (NULL);
}
