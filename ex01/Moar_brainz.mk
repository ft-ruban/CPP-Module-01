override SRCSDIR	:= srcs/
override MAINDIR    :=

SRC += $(addprefix $(MAINDIR), $(addsuffix .cpp, $(MAIN)))

override SRCS		= $(addprefix $(SRCSDIR), $(SRC))

override MAIN := main \
				 newZombie \
				 randomChump \
				 Zombie.class