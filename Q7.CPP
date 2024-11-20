#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() const = 0;
    virtual void move() const = 0;

    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void sound() const override {
        cout << "Cow: Whooooo! Whoooo!" << endl;
    }

    void move() const override {
        cout << "Dog: Mother of Human's." << endl;
    }
};

class Bird : public Animal {
public:
    void sound() const override {
        cout << "Bird: Chirp! Chirp!" << endl;
    }

    void move() const override {
        cout << "Bird: Flies in the sky." << endl;
    }
};

int main() {
    Animal* animals[2];

    animals[0] = new Dog();
    animals[1] = new Bird();

    for (int i = 0; i < 2; ++i) {
        cout << "Animal " << (i + 1) << ":" << endl;
        animals[i]->sound();
        animals[i]->move();
        cout << endl;
    }

    for (int i = 0; i < 2; ++i) {
        delete animals[i];
    }

    return 0;
}
