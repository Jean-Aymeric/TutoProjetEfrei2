//
// Created by JAD on 21/03/2023.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "typeanimal.h"
#include "dog.h"
#include "horse.h"

#ifndef TUTOPROJETEFREI2_ANIMAL_H
#define TUTOPROJETEFREI2_ANIMAL_H
typedef struct {
    TypeAnimal type;
    void* realAnimal;
} Animal;

void createAnimal(Animal* animal, TypeAnimal type, void* realAnimal);
void displayAnimal(Animal* animal);
void screamAnimal(Animal* animal);
#endif //TUTOPROJETEFREI2_ANIMAL_H
