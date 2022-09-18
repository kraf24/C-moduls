#include"Dog.hpp"
#include"Cat.hpp"

int main(void) {
    Animal *animals[10];

    for (int i = 0; i < 10; i++) {
        if (i & 1)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    for (int i = 0; i < 10; i++) {
        delete animals[i];
    }

    // copy test:
    Dog dog;
    Dog tmp = dog;
}
