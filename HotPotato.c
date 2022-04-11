#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

struct HotPotato
{
    int potatoCount, goldCount;
    thread *myThread;
}; // HotPotato

struct HotPotato *createHotPotato(thread *myThread)
{

} // createHotPotato

//int pthread_create(pthread_t *thread, pthread_attr_t *attr,
//                    void*(*start_routine) (void *arg), void *arg);


void main()
{
    char *usrin;
    printf("T - thread; H - Hot Potato; G - Gold; x - exit");
    scanf(" %c", %usrin);
    checkInput(usrin);
} // main

void checkInput(char *input)
{
    switch(input) {
        case 'T':
            pthread_create();
        case 'H':
            passPotato();
        case 'G':
            giveGold();
        case 'x':
            exit();
    }
} // checkInput

void passPotato()
{
    //TODO: implement function
} // passPotato

void giveGold()
{
    //TODO: implement function
} // giveGold

void exit()
{
    //TODO: implement function

} // exit
