#include <stdio.h> 
#include <stdlib.h> 
#include <sys/types.h>
#include <unistd.h>

void chaine(int n) {
    printf("pid =%d , ppid =%d \n", getpid(), getppid());

    for (int i=0 ; i<3; i++) {
            if (fork()==0){
             
                    printf("pid =%d , ppid =%d \n", getpid(), getppid());
                    printf("%d",i);
                exit(0);      
              }
            wait(NULL);
        }
    exit(0);
}

void arbre(int n) {
    printf("pid =%d , ppid =%d \n", getpid(), getppid());

    for (int i=0 ; i<10; i++) {
            if (fork()==0){
             
                    printf("pid =%d , ppid =%d \n", getpid(), getppid());
                    
                        
              }
             else {
                 exit(0);
                }
        }
    exit(0);
}
int main () {
 chaine(3);


}
