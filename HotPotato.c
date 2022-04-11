#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

struct Potato
{
    short potato_count, gold_count;
    int numID;
}; // HotPotato

struct Potato *createPotato(int newNumID)
{
    struct Potato *newPotato = (struct Potato*) malloc(sizeof(struct Potato));
    newPotato->potato_count = 0;
    newPotato->gold_count = 0;
    newPotato->numID = newNumID;
} // createHotPotato

//int pthread_create(pthread_t *thread, pthread_attr_t *attr,
//                    void*(*start_routine) (void *arg), void *arg);


void main()
{
    /*
    * variables
    */
    char *usrin;
    pthread_t child_thread;
    int curIndex = 0;
    int passIndex = 0;
    struct Potato thread_array[8];
    int finished = 0;                // is the program finished riunning?

    printf("T - thread; H - Hot Potato; G - Gold; x - exit\n");

    while(finished == 0) {
        scanf(" %c", &usrin);
        switch(usrin) {
            case 'T':
                struct Potato newthread = createPotato(curIndex);
                pthread_create(&child_thread, NULL, newthread, NULL);
                thread_array[curIndex] = newThread;
                curIndex++;
            case 'H':
                passPotato();
            case 'G':
                goldIndex = rand() % curIndex + 0;
                struct Potato *curThread = thread_array[goldIndex];
                curThread->gold_count = curThread->gold_count + 1;
            case 'x':
                finished = 1;
            default:
                printf("You must enter one of the following characters: \n");
                printf("T - thread; H - Hot Potato; G - Gold; x - exit\n");
                scanf(" %c", %usrin);
                checkInput(usrin);
        }

        sleep(1);
        passPotato();
//      switchGold();
    }

    passPotato()
    {
        passIndex = rand() % curIndex + 0;
        struct Potato *curThread = thread_array[passIndex];
        curThread->potato_count = curThread->potato_count + 1;
        printf("%d: Ouch! I have the hot potato!\n", passIndex);
    } // passPotato

    switchGold()
    {
        // TODO: implement the function

    } // switchGold
} // main

void exit()
{
    //TODO: implement function

} // exit
