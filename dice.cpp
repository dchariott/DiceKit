//
// Created by dylan on 2/16/2019.
//

#include "dice.h"

int rollD4(int counter){
    int total = 0;
    for (int i = 0; i < counter; i++){
        srand(time(NULL));
        int roll = rand()%4 + 1;
        total += roll;
    }
    return total;
}

int rollD6(int counter){
    int total = 0;
    for (int i = 0; i < counter; i++){
        srand(time(NULL));
        int roll = rand()%6 + 1;
        total += roll;
    }
    return total;
}

int rollD8(int counter){
    int total = 0;
    for (int i = 0; i < counter; i++){
        srand(time(NULL));
        int roll = rand()%8 + 1;
        total += roll;
    }
    return total;
}

int rollD12(int counter){
    int total = 0;
    for (int i = 0; i < counter; i++){
        srand(time(NULL));
        int roll = rand()%12 + 1;
        total += roll;
    }
    return total;
}

int rollD20(int counter){
    int total = 0;
    for (int i = 0; i < counter; i++){
        srand(time(NULL));
        int roll = rand()%20 + 1;
        total += roll;
    }
    return total;
}

int rollD100(int counter){
    int total = 0;
    for (int i = 0; i < counter; i++){
        srand(time(NULL));
        int roll = rand()%100 + 1;
        total += roll;
    }
    return total;
}