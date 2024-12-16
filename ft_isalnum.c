/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejasiewi <ejasiewi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:33:29 by ejasiewi          #+#    #+#             */
/*   Updated: 2024/12/14 19:17:09 by ejasiewi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_isalnum(char c)
{
	int	digit;
	int	upper;
	int	lower;

	digit = (c >= '0' && c <= '9');
	upper = (c >= 'A' && c <= 'Z');
	lower = (c >= 'a' && c <= 'z');
	if (digit || upper || lower)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

// int main()
// {
//     char c = '&';
//     printf("%d", ft_isalnum(c));
//     return 0;
// }