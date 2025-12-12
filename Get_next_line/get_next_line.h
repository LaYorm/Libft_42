/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 17:11:43 by yorimek           #+#    #+#             */
/*   Updated: 2025/11/24 17:12:01 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

// Includes

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

//   Main Functions

char	*get_next_line(int fd);
char	*ft_read_file(int fd, char *stock);
char	*ft_extract_line(char *str);
char	*ft_save_rest(char *str);

//    Utils functions

void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memset(void *pointer, int value, size_t count);
int		ft_has_new_line(char	*str, int searchedChar);
int		ft_strlen(char *str);
char	*ft_strjoin(char *stock, char *buff);

#endif