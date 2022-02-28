NAME = ex03
SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS = $(SRCS:.cpp=.o)
COMPILER = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(COMPILER) $(FLAGS) $^ -o $@

.cpp.o :
	$(COMPILER) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all