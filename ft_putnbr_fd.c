/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 12:04:34 by rubmedin          #+#    #+#             */
/*   Updated: 2024/12/24 12:31:35 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_putnbr_fd(int	n, int	fd)
{
	char	*str;
	int	i;
	
	str = ft_itoa(n);
	i = 0;
	while(str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}
