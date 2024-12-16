/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejasiewi <ejasiewi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 12:06:55 by ejasiewi          #+#    #+#             */
/*   Updated: 2024/12/16 15:46:52 by ejasiewi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if ((c < 'A') || (c > 'Z' && c < 'a') || (c > 'z'))
	{
		return (c);
	}
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

int main()
{
	char c = 'p';
	printf("%c", ft_toupper(c));
	return 0;
}