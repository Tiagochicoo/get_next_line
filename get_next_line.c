/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:04:32 by tpereira          #+#    #+#             */
/*   Updated: 2021/03/13 14:12:23 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(int fd, char **line)
{
	char *temp;
	
	temp = NULL;
	while (*line)
	{
		read(fd, temp, BUFFER_SIZE);
		*line = temp;
		line++;
	}
	return (0);
}
