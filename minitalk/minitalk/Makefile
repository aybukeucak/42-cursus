# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayucak <ayucak@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 17:40:22 by ayucak            #+#    #+#              #
#    Updated: 2023/12/03 21:16:57 by ayucak           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CLIENT = client
SERVER = server

SRC_CLIENT = client.c
SRC_SERVER = server.c
SRC_UTILS = utils.c

CC     = gcc
RM     = rm -f
FLAGS = -Wall -Wextra -Werror

GREEN   = \033[32;1m
RED     = \033[31;1m
YELLOW  = \033[33;49;1m
RESET   = \033[0m

all: $(SERVER) $(CLIENT)

$(SERVER):
	@ $(CC) $(FLAGS) $(SRC_UTILS) $(SRC_SERVER) -o $(SERVER)
	@echo "\n	$(GREEN)server built $(RESET)"

$(CLIENT):
	@ $(CC) $(FLAGS) $(SRC_UTILS) $(SRC_CLIENT) -o $(CLIENT)
	@echo "\n	$(GREEN)client built $(RESET)\n"

clean:
	@ $(RM) $(CLIENT) $(SERVER)
	@echo "\n	$(YELLOW)server removed $(RESET)"
	@echo "\n	$(YELLOW)client removed $(RESET)\n"
fclean:
	@ $(RM) $(CLIENT) $(SERVER)
	@echo "\n	$(YELLOW)server removed $(RESET)"
	@echo "\n	$(YELLOW)client removed $(RESET)\n"

re: fclean all

.PHONY: all clean fclean re
