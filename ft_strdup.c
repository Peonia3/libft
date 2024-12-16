/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejasiewi <ejasiewi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:25:41 by ejasiewi          #+#    #+#             */
/*   Updated: 2024/12/15 16:20:41 by ejasiewi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i - 1);
}

char *ft_strdup(const char *str)
{
    char    *copy;
    int     i;
    void    *ptr;

    i = 0;
    ft_strlen(str);
    ptr = malloc(i);
    while (str != '\0')
    {
        
    }

}