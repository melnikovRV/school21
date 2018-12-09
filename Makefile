NAME = libft.a

FLAGS = -Wextra -Wall -Werror -g
OBJECTS = $(patsubst %.c,%.o,$(wildcard *.c))

all: $(NAME)

$(NAME) : $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

$(OBJECTS): %.o: %.c
	gcc -c $(FLAGS) $< -o $@

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all