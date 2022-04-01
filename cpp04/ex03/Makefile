NAME = ex03
CXX := c++
RM := rm -rf
CXXFLAGS := -Wall -Werror -Wextra -std=c++98
SRCS = 	./main.cpp ./AMateria.cpp ./Cure.cpp ./Ice.cpp\
		./Character.cpp ./MateriaSource.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

.PHONY : all clean fclean re

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:	
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all