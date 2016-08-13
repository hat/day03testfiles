/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thendric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 10:52:52 by thendric          #+#    #+#             */
/*   Updated: 2016/08/12 11:43:32 by thendric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putchar(char c);
void	ft_ft(int *nbr);

int main(void)
{
	int num;
	int *num_pointer;

	num = 32;
	num_pointer = &num;
	printf("Pointer is currently: %d", *num_pointer);
	ft_ft(num_pointer);
	printf("Pointer has been updated to %d", *num_pointer);
	return (0);
}
