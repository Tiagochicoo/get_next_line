/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 10:38:37 by tpereira          #+#    #+#             */
/*   Updated: 2021/03/13 14:14:12 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"
/*
	gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 -fsanitize=address -g get_next_line.c get_next_line_utils.c main.c
*/

int		main(int argc, char *argv[])
{
	int		rtn;
	int		fd;
	char	*line;
	char	*fileName;
	
	if (argc >= 2)
		fileName = argv[1];
	else
		fileName = "file.txt";
	
	fd = open(fileName, O_RDONLY);
	line = NULL;
	for (int i = 0; i < 5; i++)
	{
		rtn = get_next_line(fd, &line);
		printf("\n\nReturn: %d\n\n", rtn);
		printf("Line %d: $%s$\n", i, line);
	}
	if (line)
	{
		free(line);
	}
	return (0);
}
