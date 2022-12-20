/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:47:27 by abaltaza          #+#    #+#             */
/*   Updated: 2022/12/15 11:47:27 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS:
#include <strings.h>

DESCRIPTION:
    The bzero() function erases the data in th n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area.
*/

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*p;

	p = str;
	n++;
	while (--n)
	{
		*p++ = 0;
	}
}

/*int	main(void)
{
	char	arr[8] = "ABCDefgh";
	printf("String: %s\n", arr);
	ft_bzero(arr, 2);
	printf("Return: %s", arr);
	return (0);
}*/