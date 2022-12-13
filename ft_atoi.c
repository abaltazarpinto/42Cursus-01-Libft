/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:12:10 by abaltaza          #+#    #+#             */
/*   Updated: 2022/12/13 20:24:08 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	n;

	i = 0;
	n = 0;
	sign = 1;

	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;

	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	
	while (str[i] >= 48 && str[i] <= 57)
	{
		n = n * 10 + (str[i] - 48);
		i++;
	}
	return (sign * n);
}

/*int	main(void)
{
	char    str[] = "   -----1234ab567";
        printf("String: %s\n", str);
        printf("Return: %d", ft_atoi(str));
}*/