//
// Created by JAD on 21/03/2023.
//


#include "dog.h"

Dog *createDog(char *name, char gender) {
    Dog *dogCreated = (Dog *) malloc(sizeof(Dog));
    dogCreated->name = (char *) malloc(sizeof(char) * strlen(name));
    strcpy(dogCreated->name, name);
    dogCreated->gender = gender;
    return dogCreated;
}

void displayDog(Dog *dog) {
    printf("%s(%c)\n", dog->name, dog->gender);
}

void bark(Dog *dog) {
    printf("%s : Wouaf Wouaf !!!\n", dog->name);
}
