/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletlhoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 10:12:45 by aletlhoo          #+#    #+#             */
/*   Updated: 2020/07/11 10:32:43 by aletlhoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_ft(int *nbr){
	*nbr = 42;
}

void ft_putchar(char c){
	write(1, &c, 1);
}

int 	main(void){
		int nbr;
		int *ptr1;

		nbr = 1;
		ptr1 = &nbr;

		ft_ft(ptr1);
		ft_putchar( (nbr / 10) + '0');
		ft_putchar( (nbr % 10) + '0');

		return(0);
}
