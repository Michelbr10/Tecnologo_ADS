#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

sem_t mutex;
int count = 0;

void* thread(void* arg)
{
    // entrada na seção crítica
    sem_wait(&mutex);
    count++;
    printf("Thread %d entrou na secao critica\n", count);

    // saída da seção crítica
    printf("Thread %d saindo da secao critica\n", count);
    sem_post(&mutex);
}

int main()
{
    pthread_t t1, t2;
    sem_init(&mutex, 0, 1);
    pthread_create(&t1, NULL, thread, NULL);
    sleep(2);
    pthread_create(&t2, NULL, thread, NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    sem_destroy(&mutex);
    return 0;
}
