//
// Created by JAD on 21/03/2023.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "typeanimal.h"
#include "dog.h"
#include "horse.h"
#include "tiger.h"

#ifndef TUTOPROJETEFREI2_ANIMAL_H
#define TUTOPROJETEFREI2_ANIMAL_H
#define AnimalsCount 100

typedef struct {
    unsigned int id;
    TypeAnimal type;
    void* realAnimal;
} Animal;

void createAnimal(Animal* animal, TypeAnimal type, void* realAnimal);
void displayAnimal(Animal* animal);
void screamAnimal(Animal* animal);
unsigned int getNewIdAnimal();
Animal* getAnimalById(Animal* animals, unsigned int id);
#endif //TUTOPROJETEFREI2_ANIMAL_H
