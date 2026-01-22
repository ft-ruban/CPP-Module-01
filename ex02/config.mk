NAME            := HI_THIS_IS_BRAIN
EXEC			:= bin/$(NAME)
OBJS_DIR        := .objs/
EXEC_DIR        := bin/

CXX             := c++

MAKE            := make
RM              := rm -f
RM_DIR          := rm -rf

CXXFLAGS        := -Wall -Wextra -Werror -std=c++98 -I includes
INC             := -I./include

PURPLE          := \033[1;35m
GREEN           := \033[1;32m
RED             := \033[1;31m
YELLOW          := \033[33m
BOLD_UNDERLINE  := \033[1;4m
RESET           := \033[0m