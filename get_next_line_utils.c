/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:22:32 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/12/13 02:04:40 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*ptr;
	size_t	idx;

	idx = 0;
	size = 0;
	while (s1[size] != '\0')
		size++;
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (idx < size)
	{
		ptr[idx] = s1[idx];
		idx++;
	}
	ptr[size] = '\0';
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len;
	size_t	idx;

	idx = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ((ft_strlen(s1) + ft_strlen(s2)) + 1);
	new_str = (char *) malloc(len * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	while (idx < len && *s1 != '\0')
	{
		new_str[idx] = *s1;
		s1++;
		idx++;
	}
	while (idx < len && *s2 != '\0')
	{
		new_str[idx] = *s2;
		s2++;
		idx++;
	}
	new_str[idx] = '\0';
	return (new_str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	idx;
	size_t			count;
	size_t			len_start;

	idx = start;
	count = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	len_start = ft_strlen(s + start);
	if (len_start < len)
		len = len_start;
	substr = (char *) malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	while (count < len && s[idx] != '\0')
	{
		substr[count] = s[idx];
		idx++;
		count++;
	}
	substr[count] = '\0';
	return (substr);
}

size_t	ft_strlen(const char *s)
{
	size_t	idx;

	idx = 0;
	while (s[idx] != '\0')
		idx++;
	return (idx);
}
