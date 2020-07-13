/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletlhoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:17:14 by aletlhoo          #+#    #+#             */
/*   Updated: 2020/07/13 15:30:44 by aletlhoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int  ft_iterative_power(int nb, int power)
{
	nb = 2;
	int ret_number = nb;

	int count = 0;

	while (count < power)
	{
		ret_number *= 2;
		count++;
	}	
	return ret_number;
}

