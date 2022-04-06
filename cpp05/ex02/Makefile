NAME = ex01
SRCS = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp
OBJS = $(SRCS:.cpp=.o)
CXX = c++
CXXFLAGS := -Wall -Werror -Wextra -std=c++98
RM = rm -f

all : $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
