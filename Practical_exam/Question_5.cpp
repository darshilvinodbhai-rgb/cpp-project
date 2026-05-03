#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void area() {
        cout << "Circle Area\n";
    }
    void draw() {
        cout << "Drawing Circle\n";
    }
};

class Rectangle : public Shape {
public:
    void area() {
        cout << "Rectangle Area\n";
    }
    void draw() {
        cout << "Drawing Rectangle\n";
    }
};

int main() {
    Shape* s[2];

    Circle c;
    Rectangle r;

    s[0] = &c;
    s[1] = &r;

    for (int i = 0; i < 2; i++) {
        s[i]->area();
        s[i]->draw();
    }

    return 0;
}