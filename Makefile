NAME = libft.h
AAA = a.out
CFILE = *.c
OBJECT = *.o
ARCHIVE = *.a

all: $(AAA)

$(AAA):
	cc asd.c

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(ARCHIVE)

re: fclean all