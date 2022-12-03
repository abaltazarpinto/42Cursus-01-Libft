/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:52:31 by abaltaza          #+#    #+#             */
/*   Updated: 2022/12/03 16:52:52 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*string;
	size_t			i;

	string = (unsigned char *)str;
	a = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*string == a)
		{
			return (string);
		}
		string++;
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	str[] = "suspensao";
	printf("String: %s\n", str);
	printf("Return: %s", (char *)ft_memchr(str, 'p', 2));
}*/