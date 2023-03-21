//
// Created by JAD on 21/03/2023.
//

#include "Animal.h"
void createAnimal(Animal* animal, TypeAnimal type, void* realAnimal) {
    animal->type = type;
    animal->realAnimal = realAnimal;
}

void displayAnimal(Animal* animal) {
    switch (animal->type) {
        case DOG:
            displayDog((Dog*) animal->realAnimal);
            break;
        case HORSE:
            displayHorse((Horse*)animal->realAnimal);
            break;
        default:
            break;
    }
}

void screamAnimal(Animal* animal) {
    switch (animal->type) {
        case DOG:
            bark((Dog*) animal->realAnimal);
            break;
        case HORSE:
            neigh((Horse*)animal->realAnimal);
            break;
        default:
            break;
    }
}