all:main

main: src/main.c src/print.c
	gcc src/main.c src/print.c -Wall -Wextra -Werror -o bin/main

clean:
	rm bin/main

run:
	bin/./main

rebuild:
	make clean
	make
