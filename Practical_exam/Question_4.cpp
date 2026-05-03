#include <iostream>
using namespace std;

class Animal {
public:
    virtual void displayDetails() {
        cout << "Animal details\n";
    }
};

class Dog : public Animal {
public:
    void displayDetails() {
        cout << "Dog: Bark\n";
    }
};

class Cat : public Animal {
public:
    void displayDetails() {
        cout << "Cat: Meow\n";
    }
};

int main() {
    Animal* a[2];

    Dog d;
    Cat c;

    a[0] = &d;
    a[1] = &c;

    for (int i = 0; i < 2; i++) {
        a[i]->displayDetails(); // polymorphism
    }

    return 0;
}