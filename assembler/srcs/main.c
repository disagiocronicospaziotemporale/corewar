/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsalai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 20:35:56 by anrzepec          #+#    #+#             */
/*   Updated: 2019/04/21 23:23:15 by vsalai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "assembler.h"

int		ft_initframe(t_frame **frame)
{
	if (!(*frame = (t_frame*)malloc(sizeof(**frame))))
		return (0);
	if (!((*frame)->header = (t_header*)malloc(sizeof(t_header))))
	{
		free(*frame);
		return (0);
	}
	ft_bzero(&((*frame)->header->prog_name), PROG_NAME_LENGTH + 1);
	ft_bzero(&((*frame)->header->prog_name), COMMENT_LENGTH + 1);
	(*frame)->header->magic = COREWAR_EXEC_MAGIC;
	(*frame)->lines = NULL;
	(*frame)->request = NULL;
	(*frame)->declare = NULL;
	(*frame)->errors = NULL;
	(*frame)->bytecount = 0;
	(*frame)->name = 0;
	(*frame)->comt = 0;
	return (1);
}

int		ft_open(char *file)
{
	int		fd;
	char	*tmp;
	char	*s;

	s = file;
	while ((tmp = ft_strchr(s, '/')))
		s = ++tmp;
	while ((tmp = ft_strchr(s, '.')))
		s = ++tmp;
	if (ft_strcmp(s, "s"))
	{
		ft_printf("^2^<%s> is not a correct file type\n", file);
		return (-1);
	}
	if ((fd = open(file, O_RDONLY)) == -1)
	{
		ft_printf("^2^Can not open file <%s>\n", file);
		return (-1);
	}
	return (fd);
}

int		main(int ac, char **av)
{
	int		fd;
	t_frame	*frame;

	if (ac != 2 && ac != 3)
		return (ft_printf("Usage: %s <sourcefile.s> [dest path]\n", av[0]));
	if ((fd = ft_open(av[1])) == -1)
		return (0);
	if (!ft_initframe(&frame))
		return (ft_printf("^2^$red$Error$eoc$: Failed to initialize frame\n"));
	if (ft_input(fd, frame) < 20)
		ft_fill_dist(frame->request, frame->declare, &frame->errors);
	if (close(fd) == -1)
		return (ft_printf("^2^$red$Error$eoc$: Could not process file\n"));
	if (!frame->errors)
	{
		if (!frame->lines)
			return (ft_printf("^2^$red$Error$eoc$: <%s> %s\n", av[1],
				"is empty or not a file"));
		if (!ft_write_file(frame, g_op_tab, av[1], (ac == 3) ? av[2] : 0))
			return (ft_printf("^2^$red$Error$eoc$: Creating .cor stopped\n"));
	}
	else
		ft_error_output(&frame);
	ft_free_frame(&frame);
	return (0);
}
