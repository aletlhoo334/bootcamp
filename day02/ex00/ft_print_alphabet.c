/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletlhoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 13:56:29 by aletlhoo          #+#    #+#             */
/*   Updated: 2020/07/09 14:02:27 by aletlhoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_alphabet(void)
{
	write(1,"abcdefghijkmnopqrstuvwxy",26);
}	

int		main(void)
{
	ft_print_alphabet();
	return 0;
}	
