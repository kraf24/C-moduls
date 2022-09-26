NAME = megaphone
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = clang++

GREEN = \033[0;92m
YELLOW = \033[0;93m
DEF_COLOR = \033[0;39m

all : $(NAME)

$(NAME):
	@$(CC) $(FLAGS) megaphone.cpp -o $@
	@echo "$(GREEN)MEGAPHONE!!$(DEF_COLOR)"

clean :
	@rm -rf $(NAME)

re :clean all
