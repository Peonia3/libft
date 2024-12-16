/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejasiewi <ejasiewi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:47:51 by ejasiewi          #+#    #+#             */
/*   Updated: 2024/12/14 19:23:46 by ejasiewi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_isascii(unsigned char c)
{
	if (c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int main()
// {
// 	char c = 200;
// 	printf("%d", ft_isascii(c));
// 	return 0;
// }