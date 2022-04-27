/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joluiz-d <joluiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:07:14 by joluiz-d          #+#    #+#             */
/*   Updated: 2021/12/12 19:40:14 by joluiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 1024
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
