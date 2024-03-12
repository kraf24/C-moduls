SRCS			=main.cpp Span.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -std=c++98 -Wall -Wextra -Wshadow -Werror -I.

NAME			= harl

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:			clean
	$(RM) $(NAME)

re:				fclean $(NAME)
