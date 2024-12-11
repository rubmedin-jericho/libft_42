/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:03:11 by rubmedin          #+#    #+#             */
/*   Updated: 2024/12/11 10:17:51 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	symb_repeat(const char *str)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while(str[i])
	{
		if(ft_isdigit(str[i])|| ft_isalpha(str[i]))
			i++;
		else if((str[i] == '-' || str[i] == '+') && j == 0)
		{
			i++;
			j++;
		}
		else
			return (1);
	}
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	nbr;
	int	i;
	
	if(symb_repeat(nptr))
		return (0);
	sign = 1;
	nbr = 0;
	i = 0;

	if(nptr[0] == '-')
	{
		sign = -1;
		i++;
	}
	while(nptr[i])
	{
		if(ft_isalpha(nptr[i]))
			return (nbr * sign);
		nbr = (nbr * 10) + (nptr[i] - '0');
		i++;
	}
	return (nbr * sign);
}
