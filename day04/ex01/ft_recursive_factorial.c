/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletlhoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:36:46 by aletlhoo          #+#    #+#             */
/*   Updated: 2020/07/13 14:47:23 by aletlhoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_recursive_factorial(int nb)
{
	if (nb <= 2)
	{
		nb += 1;
		ft_recursive_factorial(nb);
	return (0);
}
	else
{
	return (0);
}
}
int main()
{
	ft_recursive_factorial(1);
	return (0);
}
