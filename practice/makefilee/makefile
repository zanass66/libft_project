CC = cc
CFLAGS = -Wall -Wextra -Wall -Werror

app: main.o utils.o
	$(CC) main.o utils.o -o app

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

utils.o: utils.c
	$(CC) $(CFLAGS) -c utils.c