# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acolas <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/13 09:39:19 by acolas            #+#    #+#              #
#    Updated: 2019/04/03 10:16:27 by acolas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ASM = asm
COREWAR = corewar
NAME = $(ASM) $(COREWAR)

LIBFT_DIR = libft
LIBFT_NAME = libft.a
LIBFT_FILE = $(LIBFT_DIR)/$(LIBFT_NAME)

ASM_DIR = assembler
COREWAR_DIR = virtual_machine

SHARED_DIR = shared
SHARED_INCLUDES_DIR = $(SHARED_DIR)/includes

all: comp_libft comp_asm comp_corewar $(NAME)

norm:
	@make -C $(LIBFT_DIR)/ norm
	@make -C $(ASM_DIR)/ norm
	@make -C $(COREWAR_DIR)/ norm
	@norminette $(SHARED_INCLUDES_DIR)/

comp_libft:
	@make -C $(LIBFT_DIR)/

comp_asm:
	@make -C $(ASM_DIR)/

comp_corewar:
	@make -C $(COREWAR_DIR)/

$(NAME): $(ASM_DIR)/$(ASM) $(COREWAR_DIR)/$(COREWAR)
	@cp $(ASM_DIR)/$(ASM) $(ASM)
	@cp $(COREWAR_DIR)/$(COREWAR) $(COREWAR)

clean:
	@make -C $(LIBFT_DIR)/ clean
	@make -C $(ASM_DIR)/ clean
	@make -C $(COREWAR_DIR)/ clean

fclean:
	@make -C $(LIBFT_DIR)/ fclean
	@make -C $(ASM_DIR)/ fclean
	@make -C $(COREWAR_DIR)/ fclean
	@rm -f $(NAME)

re: fclean all

.PHONY: all norm comp_libft comp_asm comp_corewar clean fclean re
