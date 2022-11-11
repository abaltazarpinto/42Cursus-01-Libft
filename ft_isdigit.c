/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:59:43 by abaltaza          #+#    #+#             */
/*   Updated: 2022/11/11 16:53:34 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <ctype.h>
** SYNOPSIS: decimal-digit character test
**
** DESCRIPTION:
**      The isdigit (c) is a function in C which can be used to check if the passed character is a digit or not. It returns a non-zero value if it's a digit else it returns =. For example, it returns a non-zero value for '0' to '9' and zero for others. 
**      The is dgit() is declared inside ctype.h header file.
**      It is usded to check wheter the entered character is a numeric characterer [0 to 9] or not. 
**      It takes a single argument in the form of an itnteger an returns  the value of type int. 
**      Even though isdigit() takes an integer as an argument, the charater is passed to the function. Internally, the character is converted to its ASCII value for check. 
** 		The isdigit() function tests for a decimal digit character.
*/

#include "libft.h"

int    ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

