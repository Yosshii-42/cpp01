NAME	= Sed_is_for_losers
CPP		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
# FLAGS	+= -fsanitize=thread -g
SRCS	= main.cpp \
		  Replace.cpp
OBJS	= $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CPP) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re