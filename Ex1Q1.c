#include <stdio.h> 
#include <stdlib.h> 
#include <sys/types.h>
#include <unistd.h>

int main () {
  
    for (int i=0 ; i<10; i++) {
            if (fork()==0){
                for (int d=0;d<10;d++){
                printf("%i",i);
                }
                exit(0);      
              }
        }


}
