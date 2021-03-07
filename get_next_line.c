/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:04:32 by tpereira          #+#    #+#             */
/*   Updated: 2021/03/07 16:59:58 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_utils.h"

int get_next_line(int fd, char **line)
{
	while (*line)
	{
		read(fd, buf, BUFFER_SIZE);
		line++;
	}

	return (0);
}