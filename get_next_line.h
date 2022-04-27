/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:07:14 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/12/13 02:08:13 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>

//	get_next_line functions
char			*get_next_line(int fd);

//	utils functions
size_t			ft_strlen(const char	*str);
char			*ft_strdup(const char	*str);
char			*ft_strjoin(const char	*str1, const char	*str2);
char			*ft_substr(char const *str, unsigned int start, size_t len);

#endif
