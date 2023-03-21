//
// Created by JAD on 21/03/2023.
//

#include "horse.h"
Horse* createHorse(char* name, char gender, char* color) {
    Horse *horseCreated = (Horse *) malloc(sizeof(Horse));
    horseCreated->name = (char *) malloc(sizeof(char) * strlen(name));
    strcpy(horseCreated->name, name);
    horseCreated->gender = gender;
    horseCreated->color = (char *) malloc(sizeof(char) * strlen(color));
    strcpy(horseCreated->color, color);
    return horseCreated;
}

void displayHorse(Horse* horse) {
    printf("%s(%c, %s)\n", horse->name, horse->gender, horse->color);
}

void neigh(Horse* horse) {
    printf("%s : Hiiiiiiii !!!\n", horse->name);
}