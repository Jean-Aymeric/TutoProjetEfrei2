#include <stdio.h>
#include "dog.h"
#include "horse.h"
#include "Animal.h"

int main() {
    Dog *kiki = createDog("Kiki", 'M');
    Horse *tornado = createHorse("Tornado", 'M', "Black");

    Animal animals[2];
    createAnimal(&animals[0], DOG, kiki);
    createAnimal(&animals[1], HORSE, tornado);

    for (int i = 0; i < 2; i++) {
        displayAnimal(&animals[i]);
        screamAnimal(&animals[i]);
    }
//
//    displayDog(kiki);
//    bark(kiki);
//    displayHorse(tornado);
//    neigh(tornado);
    return 0;
}
