# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayucak <ayucak@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 17:40:22 by ayucak            #+#    #+#              #
#    Updated: 2023/12/03 16:51:51 by ayucak           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CLIENT = client
SERVER = server

SRC_CLIENT = client_bonus.c
SRC_SERVER = server_bonus.c
SRC_UTILS = utils_bonus.c

CC     = gcc
RM     = rm -f
FLAGS = -Wall -Wextra -Werror

GREEN   = \033[32;1m
RED     = \033[31;49;1m
YELLOW  = \033[33;49;1m
RESET   = \033[0m

all: $(SERVER) $(CLIENT)

$(SERVER):
	@ $(CC) $(FLAGS) $(SRC_UTILS) $(SRC_SERVER) -o $(SERVER)
	@echo "\n	$(GREEN)server_bonus built $(RESET)"

$(CLIENT):
	@ $(CC) $(FLAGS) $(SRC_UTILS) $(SRC_CLIENT) -o $(CLIENT)
	@echo "\n	$(GREEN)client_bonus built $(RESET)\n"

clean:
	@ $(RM) $(CLIENT) $(SERVER)
	@echo "\n	$(YELLOW)server_bonus removed $(RESET)"
	@echo "\n	$(YELLOW)client_bonus removed $(RESET)\n"
fclean:
	@ $(RM) $(CLIENT) $(SERVER)
	@echo "\n	$(YELLOW)server_bonus removed $(RESET)"
	@echo "\n	$(YELLOW)client_bonus removed $(RESET)\n"

re: fclean all

.PHONY: all clean fclean re
