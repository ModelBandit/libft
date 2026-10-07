NAME = libft.a
CFILE = ft_atoi.c ft_isdigit.c ft_memset.c ft_strnstr.c ft_bzero.c ft_isprint.c ft_strchr.c ft_strrchr.c ft_calloc.c ft_memchr.c ft_strlcat.c ft_tolower.c ft_isalnum.c ft_memcmp.c ft_strlcpy.c ft_toupper.c ft_isalpha.c ft_memcpy.c ft_strlen.c ft_isascii.c ft_memmove.c ft_strncmp.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c

OBJECT = $(CFILE:.c=.o)

CC = clang
WARN = -Wall -Wextra -Werror
SOLO = filename

all: $(NAME)

$(NAME): $(CFILE)
	$(CC) $(WARN) -c $(CFILE) && ar rcs $(NAME) $(OBJECT)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME) *.out

re: fclean all

solo: $(NAME)
	$(CC) $(WARN) $(SOLO) $(NAME)
