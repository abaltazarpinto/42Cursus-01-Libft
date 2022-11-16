/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:38:36 by abaltaza          #+#    #+#             */
/*   Updated: 2022/11/16 18:51:31 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * memset() is used to fill a block of memory with a particular value. 
 * the syntax of memset() functions is as follows:
 *ptr ==> value to be filled 
 *n ==> number of bytes to be filled strating
 *   from ptr to be filled
 *   void *memset(void *ptr, int x, size_t n);
 *   link to learn : https://www.geeksforgeeks.org/memset-c-example/
 *   */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*p;

	p = str;
	while (n--)
	{
		*p++ = (unsigned char)c;
	}
	return(str)
}

/*int	main(void)
 * {
 * 	char	arr[8] = "ABCDefgh";
 * 	printf("String: %s\n", arr);
 * 	ft_memset(arr, '1', 4);
 * 	printf("Return: %s", arr);
 * 	return(0);
 * }*/
