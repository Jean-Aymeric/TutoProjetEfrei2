//
// Created by JAD on 21/03/2023.
//

#include "Animal.h"
void createAnimal(Animal* animal, TypeAnimal type, void* realAnimal) {
    animal->id = getNewIdAnimal();
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
        case TIGER:
            displayTiger((Tiger*)animal->realAnimal);
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
        case TIGER:
            roar((Tiger*)animal->realAnimal);
            break;
        default:
            break;
    }
}

unsigned int getNewIdAnimal() {
    static unsigned int id = 0;
    return ++id;
}

Animal* getAnimalById(Animal* animals, unsigned int id) {
    for (int i = 0; i < AnimalsCount; i++) {
        if (animals[i].id == id) {
            return &animals[i];
        }
    }
    return NULL;
}