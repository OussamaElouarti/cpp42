NAME= phonebook
CC = clang++
FLAGS = -Wall -Werror -Wextra
SRCS = phonebook.cpp check.cpp
all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o $(NAME) 
clean:
	@rm -rf $(NAME)
re: clean
	$(CC) $(FLAGS) $(SRCS) -o $(NAME) 