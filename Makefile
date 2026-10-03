NAME = libft.a
CFILE = *.c
OBJECT = *.o

all: $(NAME)

$(NAME): $(CFILE)
	cc -Wall -Wextra -Werror -c $(CFILE) && ar rcs $(NAME) $(OBJECT)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all
