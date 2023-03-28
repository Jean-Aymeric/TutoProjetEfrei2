//
// Created by JAD on 28/03/2023.
//

#include "tiger.h"

Tiger* createTiger(char* name, char gender, float size, TigerColor color) {
    Tiger *tigerCreated = (Tiger *) malloc(sizeof(Tiger));
    tigerCreated->name = (char *) malloc(sizeof(char) * strlen(name));
    strcpy(tigerCreated->name, name);
    tigerCreated->gender = gender;
    tigerCreated->size = size;
    tigerCreated->color = color;
    return tigerCreated;
}
void displayTiger(Tiger* tiger) {
    printf("%s(%c,%f,%d)\n", tiger->name, tiger->gender, tiger->size, tiger->color);
}
void roar(Tiger* tiger) {
    printf("%s : ROOOOOOAAAAAAAAARRRR !!!\n", tiger->name);
}
