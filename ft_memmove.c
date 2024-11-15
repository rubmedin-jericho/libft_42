/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:24:49 by rubmedin          #+#    #+#             */
/*   Updated: 2024/11/15 01:06:29 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp;
	char	*src_tmp;
	char	*dest_tmp;
	size_t	i;	

	src_tmp = (char *)src;
	dest_tmp = (char *)dest;	

	if(dest_tmp == NULL || (src_tmp == NULL || src_tmp[0] == '\0') || n <= 0)
		return (NULL);
	tmp = malloc(sizeof(char) * ft_strlen(src_tmp));
	ft_memcpy(tmp, src_tmp, ft_strlen(src_tmp));
	i = 0;
	while(i < n && tmp[i])
	{
		dest_tmp[i] = tmp[i];
		i++;
	}
	dest_tmp[i] = '\0';
	return ((char *)dest);	
}

int	main(int argc, char **argv)
{
	char	buff_user[50];
	char	buff_original[50];

	if(argc != 3)
	{
		printf("Error <few/to many> parameters");
		return (1); 	
	}
	ft_memmove(buff_user, argv[1], atoi(argv[2]));
	memmove(buff_original, argv[1], atoi(argv[2]));
	printf("buff_user: %s\n", buff_user);
	printf("buff_original: %s\n", buff_original);
	return (0);
}
