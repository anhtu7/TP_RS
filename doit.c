#include <stdio.h> 
#include <stdlib.h> 
#include <sys/types.h>
#include <unistd.h>
#define MAX 5

int main (int argc,char* argv[]){
	execvp("ls", argv);
	return 0;
}
