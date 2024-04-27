

CC=gcc
CFLAGS=-Wall -Wextra -Werror

AR=ar

MODULES=ft_*.c
OBJECTS=ft_*.o

EXEC = clean

all: $(EXEC)
libft.a: ft_*.o
	$(AR) rv $@ $?

ft_*.o: ft_*.c
	$(CC) -c ft_*.c -o ft_*.o $(CFLAGS)

.PHONY: clean fclean

fclean:
	rm -f *.a

clean:
	rm -f *.o *.a $(EXEC) *~
