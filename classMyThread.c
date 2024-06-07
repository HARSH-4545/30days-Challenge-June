#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

// Define the MyThread structure
typedef struct {
    pthread_t thread;
    int id;
} MyThread;

// Function to be executed by the thread
void* run(void* arg) {
    MyThread* myThread = (MyThread*) arg;
    printf("Thread %d is starting.\n", myThread->id);
    for (int i = 0; i < 5; i++) {
        printf("Thread %d is running: %d\n", myThread->id, i);
        sleep(1);
    }
    printf("Thread %d has finished.\n", myThread->id);
    return NULL;
}

// Create the ThreadDemo function (main function)
int main() {
    // Create two MyThread objects
    MyThread thread1, thread2;
    
    thread1.id = 1;
    thread2.id = 2;
    
    // Start the threads
    pthread_create(&thread1.thread, NULL, run, &thread1);
    pthread_create(&thread2.thread, NULL, run, &thread2);
    
    // Wait for both threads to complete
    pthread_join(thread1.thread, NULL);
    pthread_join(thread2.thread, NULL);
    
    printf("Both threads have finished execution.\n");
    return 0;
}
