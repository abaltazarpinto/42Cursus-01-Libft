/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:47:07 by abaltaza          #+#    #+#             */
/*   Updated: 2022/12/13 19:43:08 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char *ft_itoa(int n)
{
    int len;
    int temp;
    char *str;
    int neg;
    int i;

    neg = 0;
    temp = n;
    len = 0;
    while (temp)
    {
        temp = temp / 10;
        len++;
    }
    if (n == 0)
        len++;
    if (n < 0)
    {
        neg = 1;
        len++;
    }
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return (NULL);
    str[len] = '\0';
    if (neg == 1)
        str[0] = '-';
    i = len - 1;
    while (n)
    {
        str[i] = n % 10 + '0';
        n = n / 10;
        i--;
    }
    return(str);
}

int    main(void)
{
    printf("Return: %s\n", ft_itoa(123456789));
    printf("Return: %s\n", ft_itoa(0001057));
    printf("Return: %s\n", ft_itoa(-123456789));
    printf("Return: %s\n", ft_itoa(-000167));
    return (0);
}