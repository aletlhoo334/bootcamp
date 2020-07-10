/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletlhoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 16:14:56 by aletlhoo          #+#    #+#             */
/*   Updated: 2020/07/10 09:13:28 by aletlhoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}

 void ft_is_negative(int n)
{
	if (n < 0)
	 {
		 ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}

	int main(){
		ft_is_negative(-1);
		return 0;
	}
