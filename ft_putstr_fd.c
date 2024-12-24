/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 16:20:48 by rubmedin          #+#    #+#             */
/*   Updated: 2024/12/24 16:20:50 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_putstr_fd(char	*s, int	fd)
{	
	int	i;

	i = 0;
	while(s[i])
	{
		write(fd, &s[i], 1);	
		i++;
	}
}
