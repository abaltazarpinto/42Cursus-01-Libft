/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:43:16 by abaltaza          #+#    #+#             */
/*   Updated: 2022/12/03 17:43:18 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] != '\0' && str2[i] != '\0' && n -1 > 0)
	{
		if (str1[i] == str2[i])
		{
			i++;
			n--;
		}
		else
			break ;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

/*int	main(void)
{
	char str1[20] = "bomdiaaa";
	char str2[20] = "Ola";
	//char str3[20] = "bomdiaaa";
	printf("Primeira String: %s", str1);
	printf("\nSegunda String: %s", str2);
	printf("\nReturn: %zu", ft_strncmp(str1, str2, 5));
}*/