/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletlhoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 09:31:19 by aletlhoo          #+#    #+#             */
/*   Updated: 2020/07/13 15:11:05 by aletlhoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_interative_factorial(int nb)
{
	if (nb <= 0)
	{ 
		nb += 1;

		ft_interative_factorial(nb);
		return (0);
	}
	else
	{
		return (0);
	}
}

