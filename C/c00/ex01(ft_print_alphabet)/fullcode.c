/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:47:44 by alaamimi          #+#    #+#             */
/*   Updated: 2021/06/02 19:18:05 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> /* Preprocessor directive [Library containing the system call write] */
#include <stdlib.h> /* Forbiden now [Its is allowed when malloc is used] */
#include <stdio.h> /* Also forbiden */

void	ft_print_alphabet(void) /* Define a function that will print alphabets */
{
	char	ltr; /* Declaration of a variable that will store an ascii value*/

	ltr = 'a'; /* initialize my variable with character 'a' */
	while (ltr <= 'z') /* We want to print a through z, abcde...z so we use while loop to repeat steps
					the first character is 'a' and the last is 'z', so technically reaching z is the stop condition
						*/
	{
		write(1, &ltr, 1); /*write character by character*/
		ltr++; /* Iteration by 1 step at a time */
	}
}


int	main(void) /* Entry point */
{
	printf("--------------------------------------------\n");
	printf("Printing alphabets in the standard output: \n\n");
	ft_print_alphabet(); /* Function call */
	printf("\n\n--------------------------------------------\n");
	return (EXIT_SUCCESS); /* Terminate instructions and return 0 */
}
