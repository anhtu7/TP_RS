exec: createThreads.o
	gcc -pthread -Wall -o exec createThreads.o
createThreads.o: createThreads.c
	gcc -pthread -Wall -c createThreads.c
debug:
	gcc -Wall -Wextra -pthread -g createThreads.c -o createThreads
