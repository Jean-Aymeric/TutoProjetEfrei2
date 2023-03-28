

#include "Animal.h"

int main() {
    Dog *kiki = createDog("Kiki", 'M');
    Horse *tornado = createHorse("Tornado", 'M', "Black");
    Tiger *gringer = createTiger("Gringer", 'M', 300, GREEN_ORANGE);

    Animal animals[AnimalsCount];
    createAnimal(&animals[0], DOG, kiki);
    createAnimal(&animals[1], HORSE, tornado);
    createAnimal(&animals[2], TIGER, gringer);

    for (int i = 0; i < AnimalsCount; i++) {
        displayAnimal(&animals[i]);
        screamAnimal(&animals[i]);
    }

    displayDog(kiki);
    bark(kiki);
    displayHorse(tornado);
    neigh(tornado);

    screamAnimal(getAnimalById(animals, 2));
    return 0;
}
