/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:09:09 by abaltaza          #+#    #+#             */
/*   Updated: 2022/11/11 17:21:39 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen)
		return (ft_strdup(""));
	if (!(substr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
/*
give the explanation line by line

line 1: create a char pointer called substr

line 2: create size_t variables i and slen

line 3: check if s is NULL, if so return NULL

line 4: set slen to the length of s using ft_strlen

line 5: if start is greater than slen, return an empty string

line 6: allocate memory for substr using malloc

line 7: set i to 0

line 8: loop through characters of s starting at start, copying them to substr, until either len is reached or s is finished

line 9: add a null terminating character to the end of substr

line 10: return the allocated memory for substr
*/
