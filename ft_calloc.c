/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:54:09 by abaltaza          #+#    #+#             */
/*   Updated: 2022/11/15 11:54:09 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Library: #include <stdio.h>

DESCRIPTION:
What is Calloc in C?
    The calloc() function in C is used to allocate a specified amount of memory and then initialize it to zero. 
    The function returns a void pointer to this memory location, which can then be cast to the desired type. THe
    function takis in two parameters that collectively specify the amount of memory to be allocated. 

*/

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char			*array;
	size_t			i;
	unsigned int	total;

	i = 0;
	total = nitems * size;
	array = malloc(nitems * size);
	if (array == NULL)
		return (NULL);
	while (total > 0)
	{
		array[i] = 0;
		total--;
		i++;
	}
	return ((void *)array);
}

/*int	main(void)
{
	printf("Return: %s", (char *)ft_calloc(5, 4));
}*/