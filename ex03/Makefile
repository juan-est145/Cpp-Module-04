NAME = interface.out

SRCS = AMateria.cpp\
Ice.cpp\
Cure.cpp\
Character.cpp\
MateriaSource.cpp\
main.cpp\

OBJS = $(SRCS:.cpp=.o)

HEADER = AMateria.hpp\
Ice.hpp\
Cure.hpp\
Character.hpp\
ICharacter.hpp\
IMateriaSource.hpp\
MateriaSource.hpp\

CXX = $(shell which c++ clang++ g++ | head -n 1)

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)


re: fclean
	$(MAKE) all

debug: CXXFLAGS += -g
debug: $(NAME)