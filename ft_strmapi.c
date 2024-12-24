/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:13:39 by rubmedin          #+#    #+#             */
/*   Updated: 2024/12/24 10:07:15 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*char	carac_changer(unsigned int i, char c)
{
	if(c >= 127 || (c + 1) < 32)
		return (32 + i);
	return (c + i);
}
*/
char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*str;
	int	len;
	int	i;

	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	i = 0;
	while(s[i])
	{
		str[i] = f(1, s[i]);
		i++;
	}
	return (str);	
}
