/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:52:27 by abaltaza          #+#    #+#             */
/*   Updated: 2022/12/07 15:52:27 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(char *str)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    // Handle empty string
    if (str[0] == '\0')
        return 0;

    // Handle negative numbers
    if (str[0] == '-')
    {
        sign = -1;
        i++;
    }

    // Iterate through all characters of input string and update result
    for (; str[i] != '\0'; ++i)
        result = result*10 + str[i] - '0';

    // Return result with sign
    return sign*result;
}

int	main(void)
{
	char    str[] = "   -----1234ab567";
        printf("String: %s\n", str);
        printf("Return: %d", ft_atoi(str));
}