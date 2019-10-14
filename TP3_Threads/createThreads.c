#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/types.h>
#include <unistd.h>

void *hello( void *arg )  {
    int *id = (int*)arg;
    printf("%d: hello world \n", *id);
    pthread_exit(NULL);
    pid_t getPid;
    printf(" PID = %d", getPid());
}


int main (int argc, char *argv[]) {
    int numberThread=atoi(argv[1]);
    pthread_t *thread=malloc(numberThread*sizeof(pthread_t));

    int *id=malloc(numberThread*sizeof(int));
    int i;
    for (i=0;i<numberThread;i++) {
        id[i]=i;
    }
    for (i=0;i<numberThread;i++) {
        printf("Crée thread %d\n",i);
        pthread_create(&thread[i], NULL, hello, (void *)&id[i]);
    }

    

    for (i=0; i<numberThread;i++) {
        pthread_join(thread[i],NULL);
        printf(" J'attend le thread %d \n", i); 
    }
    
    pthread_exit(NULL);

    return 0;
} 

/* Partiel: 
popen
Thread: quel problème de synchronisation: exclusion mutuelle. mutex: d'acces restraint, Semaphore, notification. 
*/
