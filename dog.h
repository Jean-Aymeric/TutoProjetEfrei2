//
// Created by JAD on 21/03/2023.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef TUTOPROJETEFREI_DOG_H
#define TUTOPROJETEFREI_DOG_H
typedef struct {
    char* name;
    char gender;
} Dog;

Dog* createDog(char* name, char gender);
void displayDog(Dog* dog);
void bark(Dog* dog);

#endif //TUTOPROJETEFREI_DOG_H
