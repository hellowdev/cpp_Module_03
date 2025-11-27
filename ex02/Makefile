CXX = c++

NAME = myprog

CXXFLAGS = -Wall -Wextra -Werror

SRC = main.cpp ClapTrap.cpp  ScavTrap.cpp FragTrap.cpp

OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME) : $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	
%.o : %.cpp  ClapTrap.hpp  ScavTrap.hpp FragTrap.hpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all