/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thendric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 10:52:52 by thendric          #+#    #+#             */
/*   Updated: 2016/08/12 14:41:18 by thendric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putchar(char c);
void	ft_ultimate_ft(int *********nbr);

int main(void)
{
	int num;
	int *num_pointer1;
	int **num_pointer2;
	int ***num_pointer3;
	int ****num_pointer4;
	int *****num_pointer5;
	int ******num_pointer6;
	int *******num_pointer7;
	int ********num_pointer8;
	int *********num_pointer;

	num = 32;
	num_pointer1 = &num;
	num_pointer2 = &num_pointer1;
	num_pointer3 = &num_pointer2;
	num_pointer4 = &num_pointer3;
	num_pointer5 = &num_pointer4;
	num_pointer6 = &num_pointer5;
	num_pointer7 = &num_pointer6;
	num_pointer8 = &num_pointer7;
	num_pointer = &num_pointer8;
	printf("Pointer is currently: %d", *********num_pointer);
	ft_ultimate_ft(num_pointer);
	printf("Pointer has been updated to %d", *********num_pointer);
	return (0);
}
