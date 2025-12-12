/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:47:38 by yorimek           #+#    #+#             */
/*   Updated: 2025/11/26 15:21:46 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_has_new_line(char	*str, int searchedChar)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == (char)searchedChar)
			return (1);
		str++;
	}
	return (0);
}

void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)pointer;
	while (i < count)
	{
		ptr[i] = value;
		i++;
	}
	return (pointer);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	if (size != 0 && nmemb > __SIZE_MAX__ / size)
		return (NULL);
	tab = (void *)malloc(nmemb * size);
	if (!tab)
		return (NULL);
	ft_memset(tab, 0, nmemb * size);
	return (tab);
}

char	*ft_strjoin(char *stock, char *buff)
{
	int		i;
	int		j;
	char	*temp;

	if (!stock)
	{
    	stock = ft_calloc(1, 1);
        if (!stock)
            return (NULL);
	}
    if (!buff)
		return (NULL);
	temp = malloc(sizeof(char) * (ft_strlen(stock) + ft_strlen(buff)) + 1);
	if (!temp)
		return (NULL);
	i = -1;
	while (stock[++i])
		temp[i] = stock[i];
	j = 0;
	while (buff[j])
		temp[i++] = buff[j++];
	temp[i] = '\0';
	free(stock);
	return (temp);
}
