/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thendric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 10:52:52 by thendric          #+#    #+#             */
/*   Updated: 2016/08/12 16:34:08 by thendric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putchar(char c);
void	ft_swap(int *a, int *b);

int main(void)
{
	int num;
	int num_two;
	int *num_pointer;
	int *num_two_pointer;

	num = 6;
	num_two = 13;
	num_pointer = &num;
	num_two_pointer = &num_two;
	printf("Num one is currently: %d\n", num);
	printf("Num two is currently: %d\n", num_two);
	ft_swap(num_pointer, num_two_pointer);
	printf("Num one is now: %d\n", num);
	printf("Num two is now: %d\n", num_two);
	return (0);
}
