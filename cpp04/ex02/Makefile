NAME = ex02
SRCS = main.cpp Dog.cpp Cat.cpp Animal.cpp Brain.cpp
OBJS = $(SRCS:.cpp=.o)
COMPILER = c++
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