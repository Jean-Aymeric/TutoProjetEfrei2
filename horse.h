//
// Created by JAD on 21/03/2023.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef TUTOPROJETEFREI_HORSE_H
#define TUTOPROJETEFREI_HORSE_H
typedef struct {
    char* name;
    char gender;
    char* color;
} Horse;

Horse* createHorse(char* name, char gender, char* color);
void displayHorse(Horse* horse);
void neigh(Horse* horse);

#endif //TUTOPROJETEFREI_HORSE_H
