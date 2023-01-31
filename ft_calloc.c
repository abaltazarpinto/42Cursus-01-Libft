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

given this function,
void	*ft_calloc(size_t nitems, size_t size)
{
	//allocating memory size with nitems*size
	void *ptr = malloc(nitems * size); 
    	//validating if memory allocation is successful
	if (ptr == NULL)
	{
	//return NULL if memory allocation fails
	        return NULL;
	}
	//setting all bytes of allocated memory to 0
	int	i = 0;
	while (i < nitems * size)
	{
		*((char*)ptr + i) = 0;
		i++;
	}
	//returning the pointer of allocated memory
	return ptr;
}

what this codes do exactly ?

	//setting all bytes of allocated memory to 0
	int	i = 0;
	while (i < nitems * size)
	{
		*((char*)ptr + i) = 0;
		i++;
	}


/*This code sets all bytes of the allocated memory to 0. It does this by iterating over the allocated memory, setting each byte to 0. The allocated memory is pointed to by the pointer 'ptr' which is of type void*. The pointer is cast to a char* so that the bytes can be accessed one at a time. The loop runs until the 'i' counter is equal to the total number of bytes allocated, which is 'nitems * size'.
*/
