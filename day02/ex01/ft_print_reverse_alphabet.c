/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletlhoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:13:16 by aletlhoo          #+#    #+#             */
/*   Updated: 2020/07/09 14:18:22 by aletlhoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_reverse_alphabet(void)
{
	write(1,"zyxwvutsrqponmkjihgfedcba",26);
}

int		main(void)
{
	ft_print_reverse_alphabet();
	return 0;
}
