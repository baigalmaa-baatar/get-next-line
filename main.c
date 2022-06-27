/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:59:11 by bbaatar           #+#    #+#             */
/*   Updated: 2021/12/09 21:06:02 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

//**********************************************
//***********TEST STANDARD OUTPUT***************
//**********************************************


// int	main(void)
// {
// 	char	*line;

// 	line = get_next_line (0);
// 	while (line != NULL)
// 	{
// 		write (1, line, strlen(line));
// 		free (line);
// 		line = get_next_line(0);
// 	}
// 	return (0);
// }

//**********************************************
//************TEST FILE INPUT*******************
//**********************************************

int	main(void)
{
	char	*line;
	int		i;
	int		fd1;
	fd1 = open("test.txt", O_RDONLY);
	i = 1;
	while (i < 7)
	{
		line = get_next_line(fd1);
		printf("line [%02d]: %s", i, line);
		free(line);
		i++;
	}
	close(fd1);
	return (0);
}