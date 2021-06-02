/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fullcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:06:10 by alaamimi          #+#    #+#             */
/*   Updated: 2021/06/02 16:27:41 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> /* This library is required to use the write function [man 2 write] */
#include <stdio.h>  /* This library is required to use the printf function*/
#include <stdlib.h> /* This library is required to yse the EXIT_SUCCESS function */

void	ft_putchar(char c) /* Define the function ft_putchar, then start giving instructions,
							in which we call the function write [System call] to print the character 
							received as argument [char c] */
{
	write(1, &c, 1); /* We call the write function in order to print the argument value passed
						as parameter.
						& : means address of the character passed as parameter */

	/* *********************************************************************** */
	/* *********************************************************************** */
	/* The function write has the following parameters :
	 * write([File descriptor], [& pointer to a buffer], [Number of bytes to write]);
	*/
}

int	main(void) /* Entry point of a program written in C */
{
	printf("-----\n"); /* Forbiden function!! */
		printf("First output is : \n"); /* Message */
	ft_putchar('@'); /* Print a character */
	printf("\n-----\n");
		printf("Second output is : \n");
	ft_putchar('A');
	printf("\n-----\n");
		printf("Third output is : \n");
	ft_putchar('0');
		printf("\n-----\n");
	return EXIT_SUCCESS; /* Return 0 instead*/
}
