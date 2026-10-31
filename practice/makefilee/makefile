app: main.o calc.o
	gcc main.o calc.o -o app
main.o: main.c
	gcc -Wall -Wextra -Werror -c main.c -o main.o
calc.o: calc.c
	gcc -Wall -Wextra -Werror -c calc.c -o calc.o
report:
	cd /tmp && pwd