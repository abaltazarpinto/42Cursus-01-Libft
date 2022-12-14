/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:42:20 by abaltaza          #+#    #+#             */
/*   Updated: 2022/12/03 17:42:22 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/*int     main(void)
{
	char    arr1[15] = "south africa";
	char    arr2[15] = "mexico";
	printf("Source: %s\n", arr1);
	printf("Destination: %s\n", arr2);
	printf("Caracteres transferidos: %zu\n", ft_strlcpy(arr2, arr1, 8));
	printf("Destination: %s\n", arr2);
	return (0);
}*/