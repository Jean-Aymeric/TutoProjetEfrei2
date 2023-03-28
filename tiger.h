//
// Created by JAD on 28/03/2023.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef TUTOPROJETEFREI2_TIGER_H
#define TUTOPROJETEFREI2_TIGER_H
typedef enum {ORANGE_WHITE, GREEN_ORANGE, GREY_WHITE, BLUE_PINK} TigerColor;

typedef struct {
    char* name;
    char gender;
    float size;
    TigerColor color;
} Tiger;

Tiger* createTiger(char* name, char gender, float size, TigerColor color);
void displayTiger(Tiger* tiger);
void roar(Tiger* tiger);
#endif //TUTOPROJETEFREI2_TIGER_H
