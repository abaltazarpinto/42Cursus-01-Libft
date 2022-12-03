/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <abaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:44:55 by abaltaza          #+#    #+#             */
/*   Updated: 2022/12/03 17:44:56 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_empty(void)
{
	char	*str;

	str = malloc(sizeof(char) * 1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		begin;
	int		end;
	int		size;

	begin = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[begin]) && s1[begin])
		begin++;
	if (s1[begin] == '\0')
		return (ft_str_empty());
	while (ft_strchr(set, s1[end]) && end > begin)
		end--;
	size = end - begin;
	new = malloc(sizeof(char) * (size + 2));
	if (!new)
		return (NULL);
	end = 0;
	while (end <= size)
		new[end++] = s1[begin++];
	new[end] = '\0';
	return (new);
}

/*int	main(void)
{
	char	str[] = "abracadabra";
	char	trim[] = "abr";
	printf("%s", "str = ");
	printf("%s\n", str);
	printf("%s", "set = ");
	printf("%s\n\n", trim);
	printf("%s", "ft_strtrim = ");
	printf("%s\n", ft_strtrim(str, trim));
}*/