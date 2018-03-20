#include<stdio.h>
#include<pthread.h>

void *thread1(void *arg)
{
    printf("thread1 my tid is %u\r\n", pthread_self());
    return NULL;
}

void *thread2(void *arg)
{
    printf("thread2 my tid is %u\r\n", pthread_self());
    return NULL;
}

int main()
{
    pthread_t tid1, tid2;
    pthread_create(&tid1, NULL, thread1, NULL);

    pthread_create(&tid2, NULL, thread2, NULL);
    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);
    return 0;

}
