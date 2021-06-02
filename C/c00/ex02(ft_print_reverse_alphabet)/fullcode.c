/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 18:30:42 by alaamimi          #+#    #+#             */
/*   Updated: 2021/06/02 18:56:33 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> /* Library that contains the system call write */
#include <stdlib.h>
#include <stdio.h>

void	ft_print_reverse_alphabet(void) /* Define a function that will reverse alphabets */
{
	char	ltr; /* Declaration of a variable that will contain a character */

	ltr = 'z'; /* Initialize my variable with z */
	while (ltr >= 'a') /* Loop through ascii values till the stop condition */
	{
		write(1, &ltr, 1); /* Write evert character passed as parameter after checking the condition */
		ltr--; /* Decrement till the condition is satisfied */
	}
}

int	main(void) /* Entry point */
{
	printf("----------------------------------\n");
	printf("Print reversed aphabets in the standard output : \n\n");
	ft_print_reverse_alphabet(); /*This function takes no parameters*/
	printf("\n\n----------------------------------\n");
	return (EXIT_SUCCESS);
}
