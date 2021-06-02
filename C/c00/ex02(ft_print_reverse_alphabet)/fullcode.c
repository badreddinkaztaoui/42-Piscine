/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 18:30:42 by alaamimi          #+#    #+#             */
/*   Updated: 2021/06/02 18:35:27 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_print_reverse_alphabet(void)
{
	char	ltr;

	ltr = 'z';
	while (ltr >= 'a')
	{
		write(1, &ltr, 1);
		ltr--;
	}
}

int	main(void)
{
	printf("----------------------------------\n");
	printf("Print reversed aphabets in the standard output : \n\n");
	ft_print_reverse_alphabet();
	printf("\n\n----------------------------------\n");
	return (EXIT_SUCCESS);
}
